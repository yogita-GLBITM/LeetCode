

class Solution {
public:
    std::vector<int> getConcatenation(std::vector<int>& nums) {
        int n = nums.size();
        // Pre-allocate space for 2n elements for efficiency
        std::vector<int> ans(2 * n); 
        
        for (int i = 0; i < n; i++) {
            ans[i] = nums[i];       // Fill the first half
            ans[i + n] = nums[i];   // Fill the second half
        }
        
        return ans;
    }

};