class Solution {
   public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> uniquetriplets;
        int n =  nums.size();
        for(int i = 0;i<n;i++){
            int target = -nums[i];
            set<int> s;
            for(int j = i+1;j<n;j++){
                int third = target - nums[j];
                if(s.find(third) != s.end()){
                    vector <int> triplets = {nums[i],nums[j],third};
                    sort(triplets.begin(),triplets.end());
                    uniquetriplets.insert(triplets);
                }
             s.insert(nums[j]);
            }
        }  
        vector<vector<int>> ans(uniquetriplets.begin(),uniquetriplets.end());
        return ans;
    }
};