class Solution {
   public:
    string minWindow(string s, string t) {
        int mapT[256] = {0};

        for (char ch : t) mapT[ch]++;

        int required = 0;
        for (int i = 0; i < 256; i++) {
            if (mapT[i] > 0) required++;
        }

        int windowCount[256] = {0};
        int formed = 0;
        int left = 0, right = 0;
        int minLen = INT_MAX;
        int minLeft = 0;

        while (right < s.length()) {
            // Expand window
            char c = s[right];
            windowCount[c]++;

            if (mapT[c] > 0 && windowCount[c] == mapT[c]) {
                formed++;
            }

            // Contract window
            while (left <= right && formed == required) {
                if (right - left + 1 < minLen) {
                    minLen = right - left + 1;
                    minLeft = left;
                }

                char leftChar = s[left];
                windowCount[leftChar]--;

                if (mapT[leftChar] > 0 && windowCount[leftChar] < mapT[leftChar]) {
                    formed--;
                }
                left++;
            }
            right++;
        }

        if (minLen == INT_MAX) {
            return "";
        } else {
            return s.substr(minLeft, minLen);
        }
    }
};