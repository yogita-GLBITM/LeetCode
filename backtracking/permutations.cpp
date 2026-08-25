class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
     vector<vector<int>>result;  //blank notebook called result everytime new arrangement stored in it 
     backtrack(nums,0,result); //backtrack fun start with pos 0 giving it in the result notebook
     return result;
    }
    private:
    void backtrack(vector<int>&nums,int start,vector<vector<int>>&result){ //"This is my helper. It needs to know three things: the current state of the numbers, which spot (start) it is currently trying to fill, and the notebook to write in."

C++
        if(start==nums.size()){
            result.push_back(nums);
            result; //base case
        }
        for(int i=start;i<nums.size();i++){
            swap(nums[start],nums[i]);
            backtrack(nums,start+1,result);
            swap(nums[start],nums[i]);
        }
    }
};