class Solution {
public:
    int balancedStringSplit(string s) {
        int ans = 0;
        int cpt = 0;
        for (auto& c: s)
        {
            if (c == 'R') cpt ++;
            else cpt --;

            if (cpt == 0) ans ++;
        }
        return ans;
    }
};