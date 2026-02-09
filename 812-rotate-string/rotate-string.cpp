class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size()) return false;
        string checker=goal;
        checker+=goal;

        if(checker.contains(s)){
            return true;
        }
        return false;
        
    }
};