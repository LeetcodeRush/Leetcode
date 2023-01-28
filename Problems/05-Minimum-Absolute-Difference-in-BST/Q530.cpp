class Solution {
public:
    int getMinimumDifference(TreeNode* root) {
        vector<int> sorted;
        inorder(root,sorted);
        int min_diff = sorted.back(); // the largest one
        for(int i=1; i<sorted.size(); i++)
            min_diff = min(min_diff,sorted[i]-sorted[i-1]);

        return min_diff;
        
    }
private:
    void inorder(TreeNode* root, vector<int>& sorted){  // Time complexity : O(n)
        if(!root) return;
        inorder(root->left,sorted);
        sorted.push_back(root->val);
        inorder(root->right,sorted);
    }
};