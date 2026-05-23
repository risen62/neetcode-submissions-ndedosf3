class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int, int>> indexed;
        for (int i = 0; i < nums.size(); i++) {
            indexed.push_back({nums[i], i});
        }
        
        sort(indexed.begin(), indexed.end());
        
        int i = 0, j = nums.size() - 1;
        while (i < j) {
            int sum = indexed[i].first + indexed[j].first;
            if (sum == target) {
                // Return the ORIGINAL indices, sorted
                int idx1 = indexed[i].second;
                int idx2 = indexed[j].second;
                if (idx1 < idx2) return {idx1, idx2};
                else return {idx2, idx1};
            } else if (sum < target) {
                i++;
            } else {
                j--;
            }
        }
        return {};
    }
};