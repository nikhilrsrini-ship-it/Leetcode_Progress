class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        if(s.size() == 0) return 0;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int contentKids = 0;
        int i = 0, right = 0;
        while (i < g.size() && right < s.size()) {
            if (g[i] <= s[right]) {
                contentKids++;
                i++; // Move to the next child ONLY when satisfied
            }
            right++; // Always move to the next cookie (either used or too small)
        }
        return contentKids;
    }
};