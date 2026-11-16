#include<math.h>
class Solution {
public:
    int reverseBits(int n) {
        string rev;
        for(int i = 0 ; i<32 ; i++){
            int digit = n%2;
            n = n/2;
            rev += char('0' + digit);
        }
        int j = 0;
        int ans = 0;
        for(int i = 31 ; i >= 0 ; i-- ){
            ans += ((rev[i] - '0')*(pow(2,j))) ;
            j++;
        }
        return ans ;

    }
};