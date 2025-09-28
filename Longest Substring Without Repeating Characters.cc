// Longest Substring Without Repeating Characters

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> lastSeen;
        int maxLen = 0;
        int start = 0; 

        for (int end = 0; end < s.length(); end++) {
            char currentChar = s[end];
            if (lastSeen.find(currentChar) != lastSeen.end()) {
                start = max(start, lastSeen[currentChar] + 1);
            }

            lastSeen[currentChar] = end; 
            maxLen = max(maxLen, end - start + 1); 
        }

        return maxLen;
    }
};
