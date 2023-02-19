class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int n = s.length();
        vector<int> accZero(n+1, 0);
        for (int i = n-1; i>= 0; i--)
        {
            accZero[i] = accZero[i+1];
            if (s[i] == '0') accZero[i]++;
        }

        int ans = accZero[0];
        int numOne = 0;
        for (int i = 0; i < n ; i++)
        {
            if (s[i] == '1') numOne++;
            ans = min(ans, (numOne + accZero[i+1]));
        }
        return ans;
    }
};