class Solution {
public:
   
    void makecombo(vector<int>& candidates, int target,int idx,
                    vector<int>& combi,int total, vector<vector<int>>&res){


        if(total==target){
            res.push_back(combi);
            return;
        }
        if(total>target||idx>=candidates.size()) return;

        combi.push_back(candidates[idx]);
        makecombo(candidates,target,idx,combi,total+candidates[idx],res);
        combi.pop_back();
        makecombo(candidates,target,idx+1,combi,total,res);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>combi;
        vector<vector<int>> res;
        makecombo(candidates,target,0,combi,0,res);
        return res;
        
        
    }
};