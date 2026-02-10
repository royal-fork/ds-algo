class Solution {
public:
    int maxDepth(string s) {
        int maxi=-1e9;
        int cnt=0;

        for(auto it:s){
            if(it=='('){
                cnt++;
                maxi=max(maxi,cnt);
            }else if(it==')'){
                cnt--;
                maxi=max(maxi,cnt);
            }
             maxi=max(maxi,cnt);
        }
        return maxi;
        
    }
};