class Solution {
public:
    int myAtoi(string s) {
        int i = 0, sign = 1, result = 0;

        // Step 1: Skip leading whitespace
        while (i < s.length() && s[i] == ' ') {
            i++;
        }

        // Step 2: Check for sign
        if (i < s.length() && (s[i] == '+' || s[i] == '-')) {
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }

        // Step 3: Process digits
        while (i < s.length() && isdigit(s[i])) {
            int digit = s[i] - '0';

            // Step 4: Handle overflow
            if (result > INT_MAX / 10 || (result == INT_MAX / 10 && digit > 7)) {
                return (sign == 1) ? INT_MAX : INT_MIN;
            }

            result = result * 10 + digit;
            i++;
        }

        return result * sign;
    }
};
