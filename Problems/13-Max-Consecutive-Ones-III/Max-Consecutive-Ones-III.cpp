class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> prefixSum(n+1, 0);
        for (int i = 1; i <= n; i++) prefixSum[i] = prefixSum[i-1] + nums[i-1];

        int res = 0;
        for (int i = 1; i <= n; i++)
        {
            int left  = i;
            int right = n;

            int ans = 0;
            while (left <= right)
            {
                int mid = (right-left)/2+left;
                int num0 = (mid-i+1)-prefixSum[mid] + prefixSum[i-1];   // in [i..mid]
                if (num0 <= k) {ans = mid; left = mid + 1;}
                else {right = mid-1;}
            }

            res = max(res, ans - i + 1);
        }
        
        return res;
        
    }
};