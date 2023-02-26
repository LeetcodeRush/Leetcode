class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        vector<long long> a(50000, 0);
        for (auto& e: roads)
        {
            a[e[0]]++;
            a[e[1]]++;
        }

        sort(a.begin(), a.end());
        long long ans = 0;
        long long j = n;
        for (int i = 50000-1; i >=0; i--)
        {
            if (a[i])
            {
                ans += a[i] * j;
                j--;
            }
        }
        return ans;
    }
};