class Solution {
public:
    int lengthOfLastWord(string s) {
        int i= s.size()-1;
        while(i>=0 && s[i]==' '){
            i--;
        }//skip spaces from end
        int length=0;
        while(i>=0 && s[i]!=' '){
            length++;
            i--;
        }
        return length;
    }
};