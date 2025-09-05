class Solution {
public:
    vector<string> res;

    void solver(int idx,string temp,unordered_map<char, string> mp,string digits){
        if(idx>=digits.length()){
            res.push_back(temp);
            return;
        }
        char ch=digits[idx];
        string s=mp[ch];
        for(int i=0;i<s.length();i++){
            temp.push_back(s[i]);
            solver(idx+1,temp,mp,digits);
            temp.pop_back();
        }

    }
    vector<string> letterCombinations(string digits) {
        if(digits.length()==0){
            return {};
        }
        string temp="";  
        unordered_map<char, string> mp = 
        {{'2', "abc"},
        {'3', "def"},
        {'4', "ghi"},
        {'5', "jkl"},
        {'6', "mno"},
        {'7', "pqrs"},
        {'8', "tuv"},
        {'9', "wxyz"}};
        solver(0,temp,mp,digits);
        return res;

        
    }
};