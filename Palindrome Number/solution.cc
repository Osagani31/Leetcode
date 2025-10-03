class Solution {
public:
    bool isPalindrome(int x) {
        // Negative numbers and numbers ending in 0 (but not 0 itself) are not palindromes
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }

        int reversed = 0;

        // Reverse only half of the number
        while (x > reversed) {
            int digit = x % 10;
            reversed = reversed * 10 + digit;
            x /= 10;
        }

        // For even number of digits: x == reversed
        // For odd number of digits: x == reversed/10
        return (x == reversed || x == reversed / 10);
    }
};
