class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        if(intervals.size() == 0) return {newInterval} ;
        vector<vector<int>>result;
        for(int i= 0 ; i < intervals.size() ; i++){
            if(newInterval[0] > intervals[i][1]){
                result.push_back(intervals[i]) ;
            }
            else if (newInterval[1] < intervals[i][0]) {
                result.push_back(newInterval);
                for (int j = i; j < intervals.size(); j++) {
                    result.push_back(intervals[j]);
                }

                return result;
            }
            else{
                newInterval[0] = min(intervals[i][0],newInterval[0]);
                newInterval[1] = max(intervals[i][1],newInterval[1]);
            }
        }
        result.push_back(newInterval);
        return result;
    }
};