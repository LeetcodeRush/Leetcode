class Solution {
public:
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        int n = arr.size();
        vector<long long> dp(n+1, 0);
        dp[1] = arr[0];
        for (int i = 2; i <= n; i++)
        {
            long long maxValue = -1;
            for (int j = i-1; j >= max(0, i-k); j--)
            {
                if (arr[j] > maxValue) maxValue = arr[j];
                long long cur  =  maxValue * (i - j) + dp[j];
                if ( cur > dp[i])
                {
                    dp[i] = cur; 
                }
            }
        }
        return dp[n];
    }
};