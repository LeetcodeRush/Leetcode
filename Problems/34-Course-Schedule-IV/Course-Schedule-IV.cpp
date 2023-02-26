class Solution {
public:
    vector<bool> checkIfPrerequisite(int numCourses, vector<vector<int>>& prerequisites, vector<vector<int>>& queries) {
        vector<vector<bool>> dp(numCourses, vector<bool>(numCourses, false));
        for (auto& e: prerequisites)
        {
            dp[e[0]][e[1]] = true;
        }    

        for (int k = 0; k < numCourses; k++)
            for (int i = 0; i < numCourses; i++)
                for (int j = 0; j < numCourses; j++)
                {
                    dp[i][j] = dp[i][j] or (dp[i][k] and dp[k][j]);
                }
        
        vector<bool> ans;
        for (auto& q: queries)
        {
            ans.push_back(dp[q[0]][q[1]]);
        }
        return ans;
    }
};