class Solution {
public:
    int partitionString(string s) {
        int ans = 0;
        unordered_set<char> st;
        for (auto& c: s)
        {
            if (st.find(c) == st.end())
            {
                st.insert(c);
            }
            else
            {
                st.clear();
                st.insert(c);
                ans++;
            }
        }
        if (!st.empty()) ans++;
        return ans;
    }
};