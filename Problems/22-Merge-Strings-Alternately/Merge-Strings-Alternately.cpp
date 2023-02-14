class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n = word1.length();
        int m = word2.length();
        string s = "";
        
        int i = 0, j = 0;
        while (i < n and j < m)
        {
            s += word1[i++];
            s += word2[j++];
        }
        if (i == n)
        {
            while (j < m) s+= word2[j++];
        }
        if (j == m)
        {
            while (i < n) s+= word1[i++];
        }
        return s;
    }
};