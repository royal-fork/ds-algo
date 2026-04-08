class Solution {
public:
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        const int MOD = 1e9+7;

        for(int i = 0; i < queries.size(); i++){
            for(int j = queries[i][0]; j <= queries[i][1]; j += queries[i][2]){
                nums[j] = (1ll * nums[j] * queries[i][3]) % MOD;
            }
        }

        int ans = nums[0];
        for(int i = 1; i < nums.size(); i++){
            ans ^= nums[i];
        }

        return ans;
    }
};