class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";

        // Sort the strings lexicographically
        sort(strs.begin(), strs.end());

        string first = strs[0];
        string last = strs[strs.size() - 1];
        string res = "";

        for (int i = 0; i < first.size(); i++) {
            if (first[i] == last[i]) {
                res += first[i];
            } else {
                break;
            }
        }

        return res;
    }
};
