class Solution {
public:
    string longestPalindrome(string s) {
        if (s.empty()) return "";
        int start = 0, end = 0;

        for (int i = 0; i < s.length(); ++i) {
            int len1 = expandFromCenter(s, i, i);     // Odd-length palindrome
            int len2 = expandFromCenter(s, i, i + 1); // Even-length palindrome
            int len = max(len1, len2);

            if (len > end - start) {
                start = i - (len - 1) / 2;
                end = i + len / 2;
            }
        }

        return s.substr(start, end - start + 1);
    }

private:
    int expandFromCenter(const string& s, int left, int right) {
        while (left >= 0 && right < s.length() && s[left] == s[right]) {
            --left;
            ++right;
        }
        return right - left - 1; // Length of the palindrome
    }
};
