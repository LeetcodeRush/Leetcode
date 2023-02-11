class Solution {
public:
    vector<int> partitionLabels(string s) {
        int n = s.length();
        vector<int> lastPos(26, 0);
        for (int i = 0; i < n; i++)
        {
            lastPos[s[i] - 'a'] = i;
        }
        
        vector<int> ans;
        int startIndex = 0;
        while (startIndex < n)
        {
            int j = startIndex;
            int endIndex = lastPos[s[startIndex] - 'a'];
            while (j < endIndex)
            {
                if (lastPos[s[j] - 'a'] > endIndex) endIndex = lastPos[s[j] - 'a'];
                j++;
            }
            ans.push_back(endIndex - startIndex + 1);
            startIndex = endIndex + 1;
        }
        return ans;
    }
};