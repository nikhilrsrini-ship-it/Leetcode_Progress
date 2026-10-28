class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum = 0;
        vector<int>SUMS(nums.size()) ;
        for(int i=0;i<nums.size();i++){
            SUMS[i] = sum+=nums[i] ;
        }
        return SUMS;
    }
};