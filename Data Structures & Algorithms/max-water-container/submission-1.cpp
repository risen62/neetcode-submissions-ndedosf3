class Solution {
   public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int ans = 0;
        int i, j;
        for (i = 0; i < n; i++) {
            for (j = i + 1; j < n; j++) {
                int width = j - i;
                int height = min(heights[i], heights[j]);
                int area = width * height;
                ans = max(area, ans);
            }
        }
        return ans;
    }
};
