class Solution {
public:
    string convertToTitle(int columnNumber) {

        string ans = "";

        while (columnNumber > 0) {

            // Convert 1-26 into 0-25
            columnNumber--;

            // Find the corresponding character
            char ch = 'A' + (columnNumber % 26);

            // Add character to answer
            ans += ch;

            // Move to the next position
            columnNumber /= 26;
        }

        // We generated the answer backwards
        reverse(ans.begin(), ans.end());

        return ans;
    }
};