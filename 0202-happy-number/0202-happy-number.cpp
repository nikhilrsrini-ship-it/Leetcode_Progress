class Solution {
public:
    int happynum(int s){
        int sum = 0;
        string str = to_string(s);
        for (int i = 0; i < str.size(); i++) {
            int digit = str[i] - '0';
            sum += digit * digit;
        }
        return sum;
    }
    bool isHappy(int n) {
        if(n==1)return true;
        int a = n;
        unordered_map<int,int>count;
        while(true){
            int b = happynum(a);
            if(b == 1) return true;
            if(count.find(b)!=count.end()) return false;
            
            else{
                count[b]++;
                a = b;
            }

        }
    }
};