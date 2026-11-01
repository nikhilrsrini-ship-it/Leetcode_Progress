class Solution {
public:
    string longestPalindrome(string s) {
        if(s.length()<=1) return s;//as single character is a palindrome.
        int n = s.length();
        int st=0;
        int max_len = 1;
//____________ODD LENGTH_______
        for(int i = 0 ; i<n ; i++){
            int l = i , r = i;
            while(l>=0 && r<n){
                if(s[l]==s[r]){
                    l--; r++;
                }
                else break;
            }
            int len = r-l-1;
            if(len>max_len){
                max_len = len;
                st = l+1 ;
            }
        }
//__________________EVEN CASE____________________
        for(int i = 0 ; i<n ; i++){
            int l = i , r = i+1;
            while(l>=0 && r<n){
                if(s[l]==s[r]){
                    l--; r++;
                }
                else break;
            }
            int len = r-l-1;
            if(len>max_len){
                max_len = len;
                st = l+1 ;
            }
        }
        return s.substr(st,max_len) ;
    }
};