class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {

        unordered_map<int,int> mp;
        // Store frequency of every number in nums1

        vector<int> ans;
        // Answer

        for(int x : nums1) {
            mp[x]++;
            // Count how many times x occurs
        }

        for(int x : nums2) {

            if(mp[x] > 0) {
                // x is present and still available

                ans.push_back(x);
                // Add x to answer

                mp[x]--;
                // Use one occurrence
            }
        }

        return ans;
    }
};