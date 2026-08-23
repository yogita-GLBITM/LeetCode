class Solution {
public:
    string removeOccurrences(string s, string part) {
        string ans="";
        int m=part.length();
        for(char ch:s){
            ans.push_back(ch);
        

        if(ans.size()>=m){
            if(ans.substr(ans.size()-m)==part){
                ans.erase(ans.size()-m);

            }
        }
    }
    return ans;
    }
};