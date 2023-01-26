# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isBalanced(self, root) -> bool:
        n = self.check(root)
        if n==-1:
            return False
        else:
            return True


    def check(self,root):
        if root is None:
            return 0
        lh= self.check(root.left)
        rh= self.check(root.right)
        if lh==-1 or rh ==-1 or abs(lh-rh)>1:
            return -1
        else:
            return 1+max(lh,rh)