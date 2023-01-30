# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def isSymmetric(self, root):
        """
        :type root: TreeNode
        :rtype: bool
        """
        def compare(n1,n2):
            if not n1 and not n2 : return True
            elif not n1 or not n2 : return False
            elif n1.val != n2.val : return False
            return compare(n1.left,n2.right) and compare(n1.right,n2.left)
        return compare(root,root)