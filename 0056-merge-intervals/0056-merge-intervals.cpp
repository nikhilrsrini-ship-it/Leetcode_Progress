class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if(intervals.size() == 1) return intervals ;
        vector<vector<int>>merges;
        sort(intervals.begin(),intervals.end());
        merges.push_back(intervals[0]);
        for(int i = 1 ; i<intervals.size();i++){
            if(intervals[i][0] <= merges.back()[1]){
                merges.back()[1] = max(merges.back()[1],intervals[i][1]) ;
            }
            else{
                merges.push_back(intervals[i]);
            }
        }
        return merges;
    }
};