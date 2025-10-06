class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";

        // Take the first string as the base to compare with others
        string prefix = strs[0];

        for (int i = 1; i < strs.size(); ++i) {
            // Reduce the prefix until it matches the current string
            while (strs[i].find(prefix) != 0) {
                prefix = prefix.substr(0, prefix.length() - 1);
                if (prefix.empty()) return "";
            }
        }
        return prefix;
    }
};
