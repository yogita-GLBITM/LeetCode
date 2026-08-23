class Solution {
public:

    // This function returns the maximum score difference
    // the current player can achieve from index i to j
    int solve(vector<int>& nums, int i, int j)
    {
        // Base case:
        // If only one number is left,
        // current player takes that number
        if(i == j)
        {
            return nums[i];
        }

        // Current player takes the left number
        // Then opponent plays on remaining array
        int takeLeft = nums[i] - solve(nums, i + 1, j);

        // Current player takes the right number
        // Then opponent plays on remaining array
        int takeRight = nums[j] - solve(nums, i, j - 1);

        // Choose the move that gives maximum advantage
        return max(takeLeft, takeRight);
    }


    bool predictTheWinner(vector<int>& nums)
    {
        // Start recursion from complete array
        int scoreDifference = solve(nums, 0, nums.size() - 1);

        // If Player 1 has advantage or equal score,
        // Player 1 wins
        return scoreDifference >= 0;
    }
};