class Solution { //can cointain duplicates
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>>result;
        backtrack(nums,0,result);
        return result;
    }
    private:
    void backtrack(vector<int>&nums,int start,vector<vector<int>>&result){
        if(start==nums.size()){
            result.push_back(nums);
            return;
        }
        unordered_set<int>seen; //{} // <-- NEW: The "Bouncer" for this specific position
        for (int i = start; i < nums.size(); i++) {
            // NEW: If we already tried this exact number in the 'start' position, skip it!
            if (seen.count(nums[i])) { 
                continue; 
            }
            // NEW: Otherwise, mark this number as seen for this position
            seen.insert(nums[i]); 
            
            swap(nums[start], nums[i]);
            backtrack(nums, start + 1, result);
            swap(nums[start], nums[i]);
        }
    
    }
};