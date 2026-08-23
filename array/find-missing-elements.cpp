class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
     unordered_set<int>s;
     int mn=nums[0];
     int mx=nums[0];
     for(int num:nums){
        mn=min(mn,num);
        mx=max(mx,num);
        s.insert(num);
     }   
      vector<int> ans;

        // Check every number between minimum and maximum
        for (int i = mn + 1; i < mx; i++) {

            // If number is missing, add it
            if (s.find(i) == s.end()) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};