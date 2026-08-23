class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n=score.size();
        vector<pair<int,int>>arr;//pair stores two values score and original index intially arr is empty
        for(int i=0;i<n;i++){
            arr.push_back({score[i],i});
        }
        sort(arr.begin(), arr.end(), greater<pair<int, int>>()); //sort in desceninding order
        vector<string>ans(n); //ans vector created with empty slots
           for(int i = 0; i < n; i++) {

            int originalIndex = arr[i].second;

            if(i == 0) {
                ans[originalIndex] = "Gold Medal";
            }
            else if(i == 1) {
                ans[originalIndex] = "Silver Medal";
            }
            else if(i == 2) {
                ans[originalIndex] = "Bronze Medal";
            }
            else {
                ans[originalIndex] = to_string(i + 1);
            }
        }

        return ans;
    }
};
    