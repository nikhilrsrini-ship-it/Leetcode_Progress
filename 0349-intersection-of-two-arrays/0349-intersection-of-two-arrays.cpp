class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>hash1;
        vector<int>ans;
        for(int i = 0 ; i< nums1.size() ; i++){
            if(hash1.find(nums1[i]) == hash1.end())
                hash1[nums1[i]] = nums1[i];
            else continue ;

        }
        for(int i = 0 ; i<nums2.size() ; i++){
            if(hash1.find(nums2[i]) != hash1.end()){
                ans.push_back(nums2[i]);
                hash1.erase(nums2[i]);
            }
            else continue;
        }
        return ans;
    }
};