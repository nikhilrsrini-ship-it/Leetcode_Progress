class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        
        int n = nums.size();
        vector<int>nums2(2*n,0) ;
        int count = n;
        for(int i = 0 ; i<n ; i++){
            nums2[i] = nums[i];
        }
        for(int i = 0 ; i<n ; i++){
            nums2[n+i] = nums[i];
        }
        return nums2;
    }
};