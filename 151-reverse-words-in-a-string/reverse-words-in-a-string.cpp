class Solution {
public:
    string reverseWords(string s) {
        vector<string> words;
        int n = s.size();
        int i = 0;

        while (i < n) {
            // skip spaces
            while (i < n && s[i] == ' ') i++;
            if (i >= n) break;

            int j = i;
            while (j < n && s[j] != ' ') j++;

            words.push_back(s.substr(i, j - i));
            i = j;
        }

        reverse(words.begin(), words.end());

        string res;
        for (int k = 0; k < words.size(); k++) {
            if (k > 0) res += " ";
            res += words[k];
        }
        return res;
    }
};
