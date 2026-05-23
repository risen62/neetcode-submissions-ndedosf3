class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int, int>> output;
        int i = 0;
        int n = nums.size();
        int j = n - 1;
        for (int i = 0; i < n; i++) {
            output.push_back({nums[i], i});
        }
        sort(output.begin(), output.end());
        while (i < j) {
            int sum = output[i].first + output[j].first;
            if (sum == target) {
                int index1 = output[i].second;
                int index2 = output[j].second;
                if (index1 < index2) {
                    return {index1, index2};
                } else {
                    return {index2, index1};
                }
            }
            else if (sum > target) {
                j--;
            } else {
                i++;
            }
        }
        return {};
    }
};