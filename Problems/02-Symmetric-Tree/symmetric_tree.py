# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isSymmetric(self, root) -> bool:
        return self.isMirror(root,root)
    
    def isMirror(self,p1,p2) ->bool:
        if p1 is None and p2 is None:
            return True
        if p1 and p2 and p1.val == p2.val:
            return self.isMirror(p1.left,p2.right) and self.isMirror(p1.right,p2.left)
        else:
            return False

    