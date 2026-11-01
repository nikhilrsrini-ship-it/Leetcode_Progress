class Solution {
public:
    string convert(string s, int numRows) {
        int n = s.length() ;
        if(numRows == 1) return s ;
        vector<string>rows(numRows) ;
        int row = 0;
        int direction = 1;
        for(int i = 0 ; i<n ; i++){
            rows[row] += s[i];
            if(row == 0) direction = 1;
            else if(row == numRows - 1) direction = -1; //if you're in the last row.
            row += direction ;
        }
        string answer;
        for(string str : rows) answer += str;
        return answer;
    }
};