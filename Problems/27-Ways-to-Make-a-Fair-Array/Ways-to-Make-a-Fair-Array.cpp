class Solution {
public:
    int waysToMakeFair(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return 1;

        vector<int> v(n, 0);
        v[0] = nums[0];
        v[1] = nums[1];

        for (int i = 2; i < n; i++)
        {
            v[i] = v[i-2] + nums[i];
        }
    
        int lastEven = (n % 2 == 0)?(n-2):(n-1);
        int lastOdd = (n % 2 == 1)?(n-2):(n-1);

        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (i == 0)
            {
                if (v[lastEven] - v[0] == v[lastOdd]) ans++;
            }
            else if (i == 1)
            {
                if (v[0] + v[lastOdd] - v[1] == v[lastEven] - v[0]) ans++;
            }
            else
            if (i % 2 == 0) 
            {
                auto sumEven = v[i-2] + v[lastOdd] - v[i-1];
                auto sumOdd = v[i-1] + v[lastEven] - v[i];
                if (sumEven == sumOdd) ans++;
            }
            else
            {
                auto sumEven = v[i-1] + v[lastOdd] - v[i];
                auto sumOdd = v[i-2] + v[lastEven] - v[i-1];
                if (sumEven == sumOdd) ans++;

            }
        }
        return ans;
    }
};