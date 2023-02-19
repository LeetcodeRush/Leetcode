class Solution {
public:
    int knightDialer(int n) {
        const int M = 1000000007;
        vector<vector<int>> dp(10, vector<int>(n+1, 0));
        for (int i = 0; i < 10; i++) dp[i][0] = 1;

        for (int j = 1; j < n; j++)
        {
            dp[1][j] = (dp[6][j-1] + dp[8][j-1]) % M;
            dp[2][j] = (dp[7][j-1] + dp[9][j-1]) % M;
            dp[3][j] = (dp[4][j-1] + dp[8][j-1]) % M;
            dp[4][j] = ((dp[3][j-1] + dp[9][j-1]) % M + dp[0][j-1]) % M;
            dp[5][j] = 0;
            dp[6][j] = ((dp[1][j-1] + dp[7][j-1]) % M + dp[0][j-1]) % M;
            dp[7][j] = (dp[2][j-1] + dp[6][j-1]) % M;
            dp[8][j] = (dp[1][j-1] + dp[3][j-1]) % M;
            dp[9][j] = (dp[2][j-1] + dp[4][j-1]) % M;
            dp[0][j] = (dp[4][j-1] + dp[6][j-1]) % M;
        }
        int ans = 0;
        for (int i = 0; i < 10; i++) ans = (ans + dp[i][n-1]) % M;
        return ans;
    }
};