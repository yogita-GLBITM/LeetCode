class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>anagramMap;
        // Create a Hash Map. Key = sorted string, Value = list of original strings
        for(const string &s:strs){
            string key=s;
            sort(key.begin(),key.end());
            anagramMap[key].push_back(s);
        }
        vector<vector<string>>result;
        for (auto& pair : anagramMap) { // Loop through every key-value pair in our Hash Map
            result.push_back(pair.second); // Take the bucket of grouped strings (the value) and add it to our final result
        } // End of loop
        return result;
    }
};