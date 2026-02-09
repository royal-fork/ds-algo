class Solution {
public:
    string removeOuterParentheses(string s) {
        string res;
        int cnt=0;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='('&& cnt==0){
                cnt=1;
            }
            else if(s[i]=='(' && cnt>=1){
                res+=s[i];
                cnt++;
            }
            else if(s[i]==')' && cnt>1){
                res+=s[i];
                cnt--;
            }
            else if(s[i]==')' && cnt==1){
                cnt=0;

            }

        }
        return res;
        
    }
};