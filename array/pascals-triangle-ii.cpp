class Solution {
public:
    vector<int> getRow(int rowIndex) {

        // Start with the first row
        vector<int> row(1, 1);

        // Create rows one by one
        for(int i = 1; i <= rowIndex; i++) {

            // Create new row with i+1 elements
            vector<int> newRow(i + 1, 1);

            // Calculate middle elements
            for(int j = 1; j < i; j++) {

                // Upper-left + upper-right
                newRow[j] = row[j - 1] + row[j];
            }

            // Move to the next row
            row = newRow;
        }

        return row;
    }
};