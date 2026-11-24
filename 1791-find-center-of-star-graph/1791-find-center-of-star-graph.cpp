class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int n = edges.size();
        vector<int>score(n+2,0);
        for(const auto& it : edges){
            int val1 = it[0];
            int val2 = it[1];
            score[val1]++;
            score[val2]++;
        }
        for(int i = 1 ; i<=n+1 ; i++){
            if(score[i]==n) return i;
        }

        return -1;
    }
};