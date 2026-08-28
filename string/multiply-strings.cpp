class Solution {
public:
    string multiply(string num1, string num2) {

        // If either number is 0, answer is 0
        if (num1 == "0" || num2 == "0")
            return "0";

        int n = num1.length();
        int m = num2.length();

        // Maximum possible size of answer
        vector<int> result(n + m, 0);

        // Start multiplication from right side
        for (int i = n - 1; i >= 0; i--) {

            for (int j = m - 1; j >= 0; j--) {

                // Convert characters to integers
                int a = num1[i] - '0';
                int b = num2[j] - '0';

                // Position where multiplication result goes
                int product = a * b;

                int p1 = i + j;
                int p2 = i + j + 1;

                // Add product to existing value
                int sum = product + result[p2];

                // Store digit
                result[p2] = sum % 10;

                // Carry
                result[p1] += sum / 10;
            }
        }

        // Convert result array to string
        string ans = "";

        for (int x : result) {

            // Skip leading zero
            if (ans.empty() && x == 0)
                continue;

            ans += char(x + '0');
        }

        return ans;
    }
};