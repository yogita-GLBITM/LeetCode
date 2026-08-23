class Solution {
public:
    void sortColors(vector<int>& nums) {
        int high,low,mid;
        high=nums.size()-1;
        mid=0;
        low=0;
        while(high>=mid){
            if(nums[mid]==0){
                swap(nums[mid],nums[low]);
                low++;
                mid++;
            }
            else if(nums[mid]==1){
                mid++;

            }
            else{
               
                swap(nums[mid],nums[high]);
                high--;
            }

        }
        
    }
};