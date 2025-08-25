class Solution {
public:
    bool pali(string& res){
        int i=0;
        int j=res.length()-1;
        while(i<j){
            if(tolower(res[i])!=tolower(res[j])){
                return 0;
            }else{
                i++;
                j--;

            }
        }
        return 1;

    }
    bool isPalindrome(string s) {
        string res="";//populating result string with only alpha and numeric
        for(auto it:s)
        if(isalnum(it)){//isalnum
            res.push_back(it);
        }
        return pali(res);
        
    }
};