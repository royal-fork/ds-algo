class Solution {
public:
    string defangIPaddr(string s) {
        string res="";
        for(int i=0;i<s.size();i++){
            if(s[i]=='.'){
                res.push_back('[');
                res.push_back('.');
                res.push_back(']');

            }else{
                res.push_back(s[i]);
            }
        }
        return res;
    }
};