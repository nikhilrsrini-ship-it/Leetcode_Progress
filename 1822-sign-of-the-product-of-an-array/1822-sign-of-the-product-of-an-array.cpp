class Solution {
public:
    int arraySign(vector<int>& nums) {
        int minus = 0 ;
        int plus = 0;
        for(int i = 0 ; i <nums.size() ; i++){
            if(nums[i] < 0) minus++ ;
            else if(nums[i] > 0) plus++;
            else return 0;
        }
        if(minus%2 == 0)return 1;
        else return -1;
    }
};