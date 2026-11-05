class Solution {
public:
    bool checkPerfectNumber(int num) {
        vector<int>v1; int sum=0;
        for(int i = 1 ; i <=num/2 ; i++){
            if(num%i  == 0) v1.push_back(i);
        }
        for(int j :v1){
            sum+=j;
        }
        return sum==num;
    }
};