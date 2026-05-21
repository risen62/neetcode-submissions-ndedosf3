class Solution {
   public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set <int> uset(nums.begin(),nums.end());
        if(nums.empty())return 0;
        int longest = 0;
        for(auto x : nums){
            if(uset.find(x - 1) == uset.end()){
                int length = 1;
                int current = x;
                while(uset.find(current + 1) != uset.end()){
                    length++;
                    current++;
                }
                 longest = max(length,longest);
            }
        }
        return longest;
    }
};