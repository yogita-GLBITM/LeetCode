class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;
        int k=0;

        for(int i=0;i<nums.size();i++){
            if(k==0||nums[i]!=nums[k-1]){
                nums[k]=nums[i];
                k++;
            }
        }
        return k;
    }
};