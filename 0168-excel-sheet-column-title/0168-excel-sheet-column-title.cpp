class Solution {
public:
    string convertToTitle(int columnNumber) {
        string alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        unordered_map<int,char>hash_map;
        for(int i = 1 ; i < 27 ; i++){
            hash_map[i] = alpha[i-1];
        }
        string result;
        int rem = 0;
        while(columnNumber > 0){
            rem = columnNumber % 26 ;
            if (rem == 0) {
                result.push_back(hash_map[26]);
                columnNumber = columnNumber / 26 - 1;
            }
            else {
                result.push_back(hash_map[rem]);
                columnNumber /= 26;
            }
        }
        reverse(result.begin(),result.end()) ;
        return result;
    }
};