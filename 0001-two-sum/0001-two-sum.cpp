class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int needed = 0;
        unordered_map<int,int> seen;
        for(int i = 0 ; i<nums.size();i++){
            needed = target - nums[i] ;
            
            if(seen.find(needed)!=seen.end()) return {i,seen[needed]};
            seen[nums[i]] = i ;
        }
        return {};
    }
};