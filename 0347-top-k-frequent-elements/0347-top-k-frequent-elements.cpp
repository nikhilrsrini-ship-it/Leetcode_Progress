class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int>ans;
        unordered_map<int,int>hmp;
        for(int i=0;i<n;i++)
        {
            hmp[nums[i]]++;
        }
        priority_queue<pair<int,int>>pq;
        for(auto it:hmp)
        {
            pq.push({it.second,it.first});
        }
        while(k>0)
        {
            ans.push_back(pq.top().second);
            pq.pop();
            k--;
        }
        return ans;
    }
};
    