class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>freq;
        int n = nums.size();
        int ans = 0;
        for(int i = 0 ; i<n; i++){
            freq[nums[i]]++;
        }
        for(int i = 0 ; i<n;i++){
        if(freq[nums[i]] > (n/2)){
                ans =  nums[i];
            }
        }
        return ans ;
    }
};