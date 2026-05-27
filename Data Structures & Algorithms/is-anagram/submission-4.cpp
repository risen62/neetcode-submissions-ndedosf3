class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }
        vector <int> hash(26,0);
        for(int i = 0;i<s.size();i++){
            hash[s[i] - 97]++;
        }

        for(int j = 0;j<t.size();j++){
            hash[t[j] - 97]--;
        }
        for(int k = 0;k<hash.size();k++){
            if(hash[k] != 0){
                return false;
            }
        }
        return true;
    }
};