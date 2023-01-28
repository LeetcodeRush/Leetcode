/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (root == NULL) return NULL;
        if (root->val == p->val || root->val == q->val)
        {
        	return root;
        }

        auto LCA_left = lowestCommonAncestor(root->left, p, q);
        auto LCA_right = lowestCommonAncestor(root->right, p, q);

        if (LCA_left && LCA_right) return root;
       	return (LCA_left)?(LCA_left):(LCA_right);
    }
};