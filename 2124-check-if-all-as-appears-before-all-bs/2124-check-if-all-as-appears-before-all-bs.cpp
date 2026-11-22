class Solution {
public:
    bool checkString(string s) {
        for(int i = 0 ; i < s.length() ; i++){
            if(s[i] == 'b' && i<s.length()-1 && s[i+1] == 'a')
                return false;
        }
        return true;
    }
};