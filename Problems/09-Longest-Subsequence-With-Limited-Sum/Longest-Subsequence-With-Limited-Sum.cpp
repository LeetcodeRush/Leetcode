class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector<int> prefixSum(n+1, 0);
        for (int i = 1; i <= n; i++) prefixSum[i] = prefixSum[i-1] + nums[i-1];

        int m = queries.size();
        vector<int> ans(m, 0);

        for (int i = 0; i < m; i++)
        {
            int left = 1, right = n;
            ans[i] = 0;
            while (left <= right)
            {
                int mid = (right - left) / 2 + left;
                if (prefixSum[mid] <= queries[i])
                {
                    ans[i] = mid;
                    left = mid + 1;
                }
                else
                {
                    right = mid - 1;
                }
            }
        }
        return ans;
    }
};