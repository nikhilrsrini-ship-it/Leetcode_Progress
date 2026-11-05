
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;

        sort(nums.begin(), nums.end());

        int longest = 1;
        int consec = 1;

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1]) {
                continue; // Ignore duplicates
            }

            if (nums[i] == nums[i - 1] + 1) {
                consec++;
            } else {
                consec = 1; // Start a new sequence
            }

            longest = max(longest, consec);
        }

        return longest;
    }
};