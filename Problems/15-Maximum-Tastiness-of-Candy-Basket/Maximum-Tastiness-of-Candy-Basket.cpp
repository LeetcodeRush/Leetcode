class Solution {
public:
    bool check(int x, vector<int>& price, int k)
    {
        int n = price.size();
        int last = 0;
        int idx = 1;
        for (int i = 1; i < k; i++)
        {
            while (idx < n && price[idx] - price[last] < x) idx++;
            if (idx == n) return false;
            last = idx;
            idx++;
        }
        return true;
    }
    int maximumTastiness(vector<int>& price, int k) {
        sort(price.begin(), price.end());
        int left = 0, right = price[price.size()-1] - price[0];
        int ans = 0;
        while (left <= right)
        {
            int mid = (right-left)/2+left;
            if (check(mid, price, k))
            {
                ans = mid;
                left = mid+1;
            }
            else right = mid-1;
        }
        return ans;
    }
};