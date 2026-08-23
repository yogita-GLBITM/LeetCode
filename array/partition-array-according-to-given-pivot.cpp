class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> ans;

        // Store elements smaller than pivot
        for (int x : nums) {
            if (x < pivot)
                ans.push_back(x);
        }

        // Store elements equal to pivot
        for (int x : nums) {
            if (x == pivot)
                ans.push_back(x);
        }

        // Store elements greater than pivot
        for (int x : nums) {
            if (x > pivot)
                ans.push_back(x);
        }

        return ans;
    }
};
