//Same as the easy question but special cases for 32 bit integer is to be considered
//32 Bit means int between [-2147483648,2147483647]
//So if lets say 1111111113 is to be reversed
//The Number is valid 32 bit but its reverse would exceed the 32 bit constraint
//Hence 0 is returned

class Solution {
public:
    int reverse(int x) {
        int reversed = 0;

        while (x != 0) {
            int digit = x % 10;

            // Check for overflow before multiplying
            if (reversed > INT_MAX / 10 ||
                (reversed == INT_MAX / 10 && digit > 7)) {
                return 0;
            }

            if (reversed < INT_MIN / 10 ||
                (reversed == INT_MIN / 10 && digit < -8)) {
                return 0;
            }

            reversed = reversed * 10 + digit;
            x = x / 10;
        }

        return reversed;
    }
};