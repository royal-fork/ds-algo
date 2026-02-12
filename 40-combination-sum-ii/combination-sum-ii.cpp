class Solution {
public:
    void makecombo(vector<int>& candidates, int target, int idx,
                   vector<int>& combi, int total,
                   vector<vector<int>>& res) {

        if (total == target) {
            res.push_back(combi);
            return;
        }

        if (total > target) return;

        for (int i = idx; i < candidates.size(); i++) {

            // duplicates skip krdo
            if (i > idx && candidates[i] == candidates[i - 1])
                continue;

            combi.push_back(candidates[i]);
            makecombo(candidates, target, i + 1,combi, total + candidates[i], res);
            combi.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {

        sort(candidates.begin(), candidates.end());

        vector<vector<int>> res;
        vector<int> combi;

        makecombo(candidates, target, 0, combi, 0, res);

        return res;
    }
};
