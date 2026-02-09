class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, int> indexs;
        unordered_map<char, int> indext;

        for (int i = 0; i < s.size(); i++) {
            if (indexs.find(s[i]) == indexs.end()) {
                indexs[s[i]] = i;
            }
            if (indext.find(t[i]) == indext.end()) {
                indext[t[i]] = i;
            }
            if (indexs[s[i]] != indext[t[i]]) {
                return false;
            }
        }
        return true;
    }
};
