class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
    //     int count=0;
    //     for(int i=0;i<n;i++){
    //         for(int j=0;j<n;j++){
    //             if(nums[i]==nums[j]){
    //                 count++;
    //             }
    //         }
        
    //     if(count>n/2){
    //         return nums[i];
    //     }
    // }
    // return -1;
    // }

    // sort(nums.begin(),nums.end());
    // return nums[n/2]; 

    // method 4 Boyer-Moore Voting Algorithm (Optimal)
int candidate=0;
int count=0;
for(int num:nums){
    if(count==0){
        candidate=num;
    }
    if(num==candidate){
        count++;
        }

        else{
            count--;

        }
    }
    return candidate;

    }
};