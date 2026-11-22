class Solution {
public:
    int jump(vector<int>& nums) {
        //As reaching the end is a given constraint need  not worry about 0's 
        int n = nums.size();
        int steps = 0;
        int currentEnd = 0;
        int farthest = 0;
        for(int i = 0 ;i <n-1;i++){
            farthest = max(farthest,i + nums[i]);
            if(currentEnd == i){
                steps++;
                currentEnd = farthest;
            }     
        }
        return steps;
    }
};