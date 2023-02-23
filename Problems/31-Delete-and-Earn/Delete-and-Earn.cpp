class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        unordered_map<int, int> m;
        for (auto x: nums) m[x]++;

        vector<int> dp(10001, 0); 
        dp[1] = m[1];
        for (int i = 2; i <= 10000; i++)
        {
            dp[i] = max(dp[i-2] + i * m[i], dp[i-1]);
        }
        return dp[10000];
    }
};