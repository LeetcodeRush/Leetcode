# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def hasPathSum(self, root, targetSum):
        """
        :type root: TreeNode
        :type targetSum: int
        :rtype: bool
        """
        if root == None : return False
        newTarget = targetSum-root.val
        if root.left == None and root.right == None and  newTarget == 0:
            return True
        return self.hasPathSum(root.left,newTarget) or self.hasPathSum(root.right,newTarget)