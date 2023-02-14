class Solution {
public:
    int minFlips(string target) {
        int n = target.size();
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if ((ans % 2 == 0 && target[i] != '0') || (ans % 2 == 1 && target[i] == '0')) ans++;
        }
        return ans;
    }
};