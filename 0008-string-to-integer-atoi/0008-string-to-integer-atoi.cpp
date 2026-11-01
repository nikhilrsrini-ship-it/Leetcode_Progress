#include <climits>
#include <cctype>

class Solution {
public:
    int myAtoi(string s) {
        int n = s.length();
        int i = 0;

        // Step 1: Skip leading spaces
        while (i < n && s[i] == ' ') {
            i++;
        }

        // Step 2: Check the sign
        int sign = 1;

        if (i < n && s[i] == '-') {
            sign = -1;
            i++;
        }
        else if (i < n && s[i] == '+') {
            i++;
        }

        // Step 3: Read digits
        int num = 0;

        while (i < n && isdigit(s[i])) {
            int digit = s[i] - '0';

            // Step 4: Check for overflow
            if (num > INT_MAX / 10 ||
                (num == INT_MAX / 10 && digit > INT_MAX % 10)) {
                return (sign == 1) ? INT_MAX : INT_MIN;
            }

            num = num * 10 + digit;
            i++;
        }

        return num * sign;
    }
};