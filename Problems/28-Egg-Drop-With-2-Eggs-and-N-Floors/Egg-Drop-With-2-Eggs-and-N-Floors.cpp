class Solution {
public:
    int solve(int k, int n, vector<int>& dp)
    {
        if (k == 1) return n;
        if (dp[n] != 0) return dp[n];
        for (int i = 1; i <= n; i++)
        {
            int tmp = 1 + max(solve(k-1, i-1, dp), solve(k, n-i, dp));
            if (dp[n] == 0) dp[n] = tmp;
            else dp[n] = min(dp[n], tmp);
        }
        return dp[n];
    }

    int twoEggDrop(int n) {
        vector<int> dp(n+1, 0);
        return solve(2, n, dp);
    }
};