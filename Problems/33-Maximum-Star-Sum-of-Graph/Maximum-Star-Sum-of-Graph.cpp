class Solution {
public:
    int maxStarSum(vector<int>& vals, vector<vector<int>>& edges, int k) {
        int n = vals.size();
        vector<vector<int>> a(n, vector<int>());
        
        for (auto& e: edges)
        {
            a[e[0]].push_back(vals[e[1]]);
            a[e[1]].push_back(vals[e[0]]);
        }

        for (int i = 0; i < n; i++)
        {
            sort(a[i].begin(), a[i].end(), greater<int>());
        }

        int ans = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            int sum = vals[i];
            int m = (k < a[i].size())?k:a[i].size();
            for (int j = 0; j < m; j++) 
            {
                if (a[i][j] > 0) sum += a[i][j];
                else break;
            }
            if (sum > ans) ans = sum;
        }
        return ans;
    }
};