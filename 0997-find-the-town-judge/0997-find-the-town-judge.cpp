class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int>score(n+1,0);
        for(const auto&edge : trust){
            int truster = edge[0];
            int trusted = edge[1];
            score[truster]--;
            score[trusted]++;
        }
        for(int i = 1; i <=n;++i){
            if(score[i]==n-1){
                return i;
            }
        }
        return -1;
    }
};