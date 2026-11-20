class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,vector<int>>hashmap;
        vector<int>ans;
        vector<int>nums = (nums1.size() > nums2.size())?nums2 : nums1;
        vector<int>nums3 = (nums1.size() > nums2.size())?nums1 : nums2;
        for(int i = 0 ; i< nums.size() ; i++){
            hashmap[nums[i]].push_back(nums[i]);
        }
        for(int i = 0 ; i<nums3.size() ; i++){
            if(hashmap.find(nums3[i]) != hashmap.end()){
                ans.push_back(nums3[i]);
                hashmap[nums3[i]].pop_back();
                if (hashmap[nums3[i]].empty()) {
                    hashmap.erase(nums3[i]);
                }
            }
            else continue;
        }
        return ans;
    }
};