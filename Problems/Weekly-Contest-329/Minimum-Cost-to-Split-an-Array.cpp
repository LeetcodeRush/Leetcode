#include <bit/stdc++.h>
uisng namespace std;

class Solution {
public:
    int minCost(vector<int>& nums, int k) {
        int n = nums.size();
        
        vector<long long> dp(n+1, 0);
        dp[0] = k;
        for (int i = 1; i < n; i++)
        {
            unordered_map<int, int> counter;
            int numberOfUniqueElement = 0;
            long long minCost = -1;
            for (int j = i; j >= 0; j--)
            {
                counter[nums[j]]++;
                if (counter[nums[j]] == 1) numberOfUniqueElement++;
                if (counter[nums[j]] == 2) numberOfUniqueElement--;
                long long importance = k + (i - j + 1 - numberOfUniqueElement);

                long long cost = (j == 0)?importance:importance + dp[j-1];
                
                if (minCost == -1) minCost = cost;
                else if (minCost > cost)
                {
                    minCost = cost;
                } 
                dp[i] = minCost;
            }
        }
            
        return dp[n-1];
    }
};
