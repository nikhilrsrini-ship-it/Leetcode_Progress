
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum = 0;

        // Phase 1: Calculate sum of first k elements
        for (int i = 0; i < k; i++) {
            sum += nums[i];
        }

        int MaxSum = sum;

        // Phase 2: Slide the window
        for (int right = k; right < nums.size(); right++) {
            sum -= nums[right - k] ;
            sum+= nums[right] ;

            // Add the new element entering the window
            MaxSum = MaxSum > sum ? MaxSum : sum;
            // Update maxSum
        }

        return (double)MaxSum / k;
    }
};
