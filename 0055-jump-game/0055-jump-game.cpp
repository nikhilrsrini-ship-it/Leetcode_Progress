class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        if(n==1)return true;
        if(nums[0] == 0 && n>1)return false;
        int farthest = 0;
        int end = nums[n-1];
        for(int i = 0 ; i<n;i++){
            if(i>farthest) break;
            farthest = max(farthest,i+nums[i]);
            if(farthest >= (n-1)) return true ;
        }
        return false;
    }
};