class Solution {
public:
    int happynum(int s) {
        int sum = 0;

        while (s > 0) {
            int digit = s % 10;
            sum += digit * digit;
            s /= 10;
        }

        return sum;
    }

    bool isHappy(int n) {
        unordered_set<int> count;

        while (n != 1) {
            n = happynum(n);

            if (!count.insert(n).second) {
                return false;
            }
        }

        return true;
    }
};