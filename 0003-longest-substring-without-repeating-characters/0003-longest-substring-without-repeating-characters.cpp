class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int set[256] = {0};

        int l = 0;
        int max_len = 0;

        for (int i = 0; i < n; i++) {

            while (set[(unsigned char)s[i]]) {
                set[(unsigned char)s[l]] = 0;
                l++;
            }

            set[(unsigned char)s[i]] = 1;

            max_len = (max_len > (i - l + 1))? max_len : (i - l + 1);
        }

        return max_len;
    }
};