class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(target==nums[i]+nums[j]){
return {i,j};
            }
        }
    } 
    return{};   
    }
};
// unordered_map<int,int>mp;//Container<DataType1, DataType2> objectName;
// for(int i=0;i<n;i++){
//     int need=target-nums[i];
//     if(mp.find(need)!=mp.end())//"Search reached the end. The key wasn't found."
//     {
//         return{mp[need],i};
//     }
// mp[nums[i]]=i;
// }
// return {};



//     }
// };