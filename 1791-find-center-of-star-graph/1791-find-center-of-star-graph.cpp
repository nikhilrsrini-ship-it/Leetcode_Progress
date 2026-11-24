class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int n = edges.size();
        vector<int>score(n+2,0);
        for(const auto& it : edges){
            score[it[0]]++;
            score[it[1]]++;
        }
        for(int i = 1 ; i<=n+1 ; i++){
            if(score[i]==n) return i;
        }

        return -1;
    }
};