#include <bits/stdc++.h>
using namespace std;
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
	bool check(TreeNode* root, int& height)
	{
		if (root == nullptr) {
			height = -1;
			return true;
		}
		int leftHeight{};
		int rightHeight{};
		bool balanced = check(root->left, leftHeight) && check(root->right, rightHeight) && (abs(leftHeight - rightHeight) <= 1);
		height = max(leftHeight, rightHeight) + 1;
		return balanced
	}
    bool isBalanced(TreeNode* root) {
    	int height{};
    	return check(root, height);
    }
};