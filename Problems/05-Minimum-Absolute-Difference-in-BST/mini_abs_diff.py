# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def getMinimumDifference(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        def inorder(root):
            if not root : return []
            return inorder(root.left)+[root.val]+inorder(root.right)

        mini = float("inf")
        inord = inorder(root)
        for i in range(1,len(inord)):
            mini = min(mini,inord[i]-inord[i-1])
        return mini
        