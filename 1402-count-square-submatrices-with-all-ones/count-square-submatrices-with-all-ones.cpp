class Solution {
public:
    int countSquares(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        int dp[m][n];
        memset(dp, 0, sizeof(dp));

        for(int j = 0; j < mat[0].size(); j++){
            dp[0][j] = mat[0][j];
        }

        for(int i = 0; i < mat.size(); i++){
            dp[i][0] = mat[i][0];
        }

        for(int i = 1; i < m; i++){
            for(int j = 1; j < n; j++){
                if(mat[i][j])
                dp[i][j] = 1 + min({dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1]});

            }
        }
        int sum = 0;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                sum += dp[i][j];
            }
        }

        return sum;
    }
};