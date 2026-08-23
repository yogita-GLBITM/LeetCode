class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        // Start from the last digit
        for(int i = digits.size() - 1; i >= 0; i--) {
            
            // If digit is less than 9, simply add 1
            if(digits[i] < 9) {
                digits[i]++;
                return digits;
            }
            
            // If digit is 9, make it 0 and carry 1
            digits[i] = 0;
        }
        
        // If all digits were 9, we need an extra digit
        digits.insert(digits.begin(), 1);
        
        return digits;
    }
};