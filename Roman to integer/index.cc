class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> roman = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };
        
        int result = 0;
        int n = s.length();
        
        for (int i = 0; i < n; ++i) {
            // Check if current symbol is less than the next symbol
            if (i + 1 < n && roman[s[i]] < roman[s[i + 1]]) {
                result -= roman[s[i]]; // Subtract for cases like IV, IX, etc.
            } else {
                result += roman[s[i]]; // Normal addition
            }
        }
        
        return result;
    }
};
