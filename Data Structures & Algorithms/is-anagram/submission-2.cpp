class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length())
         return false;

        vector<int> hash(26, 0);

        for (int i = 0; i < s.length(); i++) {
            hash[s[i] - 97]++;
        }

        for (int j = 0; j < t.length(); j++) {
            hash[t[j] - 97]--;

            if (hash[t[j] - 97] < 0) {
                return false;
            }
        }

        return true;
    }
};