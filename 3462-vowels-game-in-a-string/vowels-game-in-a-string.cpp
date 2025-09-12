class Solution {
public:
    bool doesAliceWin(string s) {
        set<char> st = {'a', 'e', 'i', 'o', 'u'};  
        for (auto it : s) {
            if (st.find(it) != st.end()) {  
                return true;
            }
        }
        return false;
    }
};
