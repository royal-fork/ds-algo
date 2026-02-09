class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        int n=strs.size();
        string  first=strs[0];
        string  last=strs[n-1];
        string res="";
        int i=0;

        while(i<first.size() && i<last.size()){
            if(first[i]==last[i]){
                res.push_back(first[i]);
                i++;
            }else{
                break;
            }
        }
        return res;
        
    }
};