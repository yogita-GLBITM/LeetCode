class Solution {
public:
    vector<string> findWords(vector<string>& words) {

        vector<string> ans;

        string row1 = "qwertyuiop";
        string row2 = "asdfghjkl";
        string row3 = "zxcvbnm";

        for (string word : words) {

            // Convert first character to lowercase
            char first = tolower(word[0]);

            string row;

            // Decide which keyboard row the word should use
            if (row1.find(first) != string::npos) {
                row = row1;
            }
            else if (row2.find(first) != string::npos) {
                row = row2;
            }
            else {
                row = row3;
            }

            bool valid = true;

            // Check every character of the word
            for (char c : word) {

                c = tolower(c);

                if (row.find(c) == string::npos) {
                    valid = false;
                    break;
                }
            }

            // If all characters belong to the same row
            if (valid) {
                ans.push_back(word);
            }
        }

        return ans;
    }
};