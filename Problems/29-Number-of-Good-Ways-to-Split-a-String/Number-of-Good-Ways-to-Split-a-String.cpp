class Solution {
public:
    int numSplits(string s) {
        int n = s.length();
        vector<int> right(n+1, 0);
        
        unordered_set<char> ss;
        for (int i = n-1; i >= 0; i--)
        {
            ss.insert(s[i]);
            right[i] = ss.size();
        }

        ss.clear();
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            ss.insert(s[i]);
            if (ss.size() == right[i+1]) ans++;
        }
        return ans;
    }
};