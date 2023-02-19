class Solution {
public:
    vector<int> findBall(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        vector<vector<int>> dp(m+1, vector<int>(n, -1));
        for (int j = 0; j < n; j++) dp[m][j] = j;

        for (int i = m-1; i >= 0; i--)
        {
            for (int j = n-1; j >= 0; j--)
            {
                if (j != n-1 and grid[i][j+1] == -1 and grid[i][j] == -1)
                {
                    dp[i][j+1] = dp[i+1][j];
                }
                else if (j != 0 and grid[i][j-1] == 1 and grid[i][j] == 1)
                {
                    dp[i][j-1] = dp[i+1][j];
                }
            }
        }

        vector<int> ans(n, 0);
        for (int j = 0; j < n; j++) ans[j] = dp[0][j];
        return ans;
    }
};