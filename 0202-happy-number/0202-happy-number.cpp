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
        int slow = n;
        int fast = n;
        while (n != 1) {
            slow = happynum(slow);
            fast = happynum(happynum(fast));

            if(fast ==1) return true;
            if(fast == slow) return false;
        }

        return true;
    }
};