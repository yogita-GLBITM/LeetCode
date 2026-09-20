class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
       vector<int>ans;
       int n=temperatures.size();
       
       for(int i=0;i<n;i++){
        int found=0;
        for(int j=i+1;j<n;j++){
            if(temperatures[i]<temperatures[j]){
           ans.push_back(j-i);
           found=1;
           break;
        }
        
       } 
       if(found==0)
       ans.push_back(0);
       }
    
    return ans;
    }
};