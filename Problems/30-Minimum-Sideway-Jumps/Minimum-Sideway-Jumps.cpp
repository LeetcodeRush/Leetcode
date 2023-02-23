class Solution {
public:
    int minSideJumps(vector<int>& obstacles) {
        int n = obstacles.size();
        vector<vector<int>> dp(n, vector<int>(3,0));
        dp[0][0] = dp[0][2] = 1;
       
        for (int i = 1; i < n; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                dp[i][j] = INT_MAX-1;
                if (obstacles[i] - 1 == j) continue;
                
                if (obstacles[i-1] -1 != j) dp[i][j] = min(dp[i][j], dp[i-1][j]);

                int lane = (j+1) % 3;
                if (obstacles[i-1] -1 != lane && obstacles[i] -1 != lane) dp[i][j] = min(dp[i][j], dp[i-1][lane]+1);

                lane = (j+2) % 3;
                if (obstacles[i-1] -1 != lane && obstacles[i] -1 != lane) dp[i][j] = min(dp[i][j], dp[i-1][lane]+1);
            }
        }

        int ans = INT_MAX;
        for (int j = 0; j < 3; j++) ans = min(ans, dp[n-1][j]);
        return ans;
    }
};