class Solution {
   public:
    bool isPalindrome(string s) {
        int n = s.length() - 1;
        int i = 0;
        int j = n;
        int k;

        // Convert to lowercase
        for (k = 0; k < s.length(); k++) {
            s[k] = tolower(s[k]);
        }

        while (i < j) {
            // Skip non-alphanumeric from left
            while (i < j && !isalnum(s[i])) {
                i++;
            }

            // Skip non-alphanumeric from right
            while (i < j && !isalnum(s[j])) {
                j--;
            }

            // Compare the alphanumeric characters
            if (s[i] != s[j]) {
                return false;
            }

            // Move to next positions
            i++;
            j--;
        }
        return true;
    }
};
