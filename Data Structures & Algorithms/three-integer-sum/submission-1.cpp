class Solution {
   public:
    vector<vector<int>> threeSum(vector<int>& nums) {  // brute force
        vector<vector<int>> ans;
        set<vector<int>> s;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                for (int k = j + 1; k < n; k++) {
                    if (nums[i] + nums[j] + nums[k] == 0) {
                        vector<int> triplets = { nums[i], nums[j], nums[k]};
                        sort(triplets.begin(),triplets.end());
                        if(s.find(triplets) == s.end()){
                            s.insert(triplets);
                            ans.push_back(triplets);
                        }
                    }
                }
            }
        }
        return ans;
    }
};