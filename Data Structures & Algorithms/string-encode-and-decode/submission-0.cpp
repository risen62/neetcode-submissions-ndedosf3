class Solution {
   public:
    string encode(vector<string>& strs) {
        string result = "";
        for(auto x : strs){
            result += to_string(x.length()) + "#" + x;
        }
        return result;
        
    }

    vector<string> decode(string s) {
        int i = 0;
        int j;
        int length;
        vector <string> output;
        while(i < s.length()){
            j = i;
            while(s[j] !=  '#'){
                j++;
            }
            string lenstr = s.substr(i,j-i);
            length = stoi(lenstr);
            output.push_back(s.substr(j+1,length));
            i = j + 1 + length;
        }
        return output;
    }
};