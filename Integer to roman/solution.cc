class Solution {
public:
    string intToRoman(int num) {
        // Define Roman numeral values and their corresponding symbols
        int values[] =    {1000, 900, 500, 400, 100, 90,  50,  40,  10,   9,   5,   4,   1};
        string symbols[] = {"M", "CM","D", "CD","C","XC","L","XL","X", "IX","V","IV","I"};
        
        string result = "";

        // Iterate through all values and symbols
        for (int i = 0; i < 13 && num > 0; ++i) {
            while (num >= values[i]) {
                result += symbols[i];  // Append symbol
                num -= values[i];      // Subtract value
            }
        }
        
        return result;
    }
};
