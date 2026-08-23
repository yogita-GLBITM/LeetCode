class Solution {
public:
    int maxSubArray(vector<int>& nums) {
    //     int n=nums.size();
    //     int maxSum=nums[0];
    //     for(int i=0;i<n;i++){
    //         for(int j=i;j<n;j++){
    //             int sum=0;
    //             for(int k=i;k<=j;k++){
    //                 sum=sum+nums[k];
    //             }
    //             maxSum=max(maxSum,sum);
    //         }
    //     }
    //     return maxSum;

    // }
int currsum=0;
int maxsum=nums[0];
for(int i=0;i<nums.size();i++){
    currsum += nums[i];
    maxsum=max(currsum,maxsum);
    if(currsum<0){
        currsum=0;
    }
}
return maxsum;
}

};