/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
	TreeNode* prev = nullptr;
	void dfs(TreeNode* root, int& minDifference)
	{
		if (root->left)
		{
			dfs(root->left, minDifference);
		}

		if (prev != nullptr)
		{
			minDifference = min(minDifference, abs(root->val - prev->val));
		}
		
		prev = root;

		if (root->right)
		{
			dfs(root->right, minDifference);
		}
	}
	
    int getMinimumDifference(TreeNode* root) {
    	int minDifference = INT_MAX;
    	dfs(root, minDifference);
    	return minDifference;
    }
};