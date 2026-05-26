class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set <char> uset;
        int left = 0;
        int n = s.size();
        int maxlength = 0;
        for(int right = 0;right<n;right++){
            while(uset.find(s[right]) != uset.end()){
                uset.erase(s[left]);
                left++;
            }
            uset.insert(s[right]);
            maxlength = max(maxlength,right - left  + 1);
        }
        return maxlength; 
    }
};