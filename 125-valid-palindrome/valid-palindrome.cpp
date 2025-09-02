#include <cctype>
class Solution {
public:
    bool pali(string &res) {
        int start = 0;
        int end = res.size() - 1;
        while (end > start) {
            if (tolower(res[start]) != tolower(res[end])) {
                return false;
            }
            start++;
            end--;
        }
        return true;
    }

    bool isPalindrome(string s) {
        string res = "";
        for (int i = 0; i < s.size(); i++) {
            if (isalnum(s[i])) {
                res.push_back(s[i]);
            }
        }
        return pali(res);
    }
};
