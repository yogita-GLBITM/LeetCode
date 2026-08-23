class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        string ans = "";   // Stores the common prefix

        // Traverse each character of the first string
        for(int i = 0; i < strs[0].size(); i++) {

            char ch = strs[0][i];  // Current character of first string

            // Compare this character with all other strings
            for(int j = 1; j < strs.size(); j++) {

                // If current index exceeds any string length
                // OR characters do not match
                if(i >= strs[j].size() || strs[j][i] != ch)
                    return ans;     // Return prefix found so far
            }

            // If all strings have same character at index i
            ans += ch;
        }

        // Entire first string is common prefix
        return ans;
    }
};