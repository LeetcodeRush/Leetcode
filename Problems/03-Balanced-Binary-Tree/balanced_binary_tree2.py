# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def isBalanced(self, root):
        """
        :type root: TreeNode
        :rtype: bool
        """
        n = self.diff(root)
        if n == -1: return False
        else: return True
        
    def diff(self,root):
            if root == None: return 0
            hautL = self.diff(root.left)
            hautR = self.diff(root.right)
            if hautL >= 0 and hautR >= 0 and abs(hautL-hautR) <= 1: return max(hautR,hautL)+1
            else: return -1