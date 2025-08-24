class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;//sorted version   ,   group of words

        for (string word : strs) {
            string sorted_word = word;
            sort(sorted_word.begin(), sorted_word.end()); //word ko sort krlia
            mp[sorted_word].push_back(word); // group by sorted word
        }

        vector<vector<string>> result;
        for (auto &entry : mp) {
            result.push_back(entry.second);
        }

        return result;
    }
};
