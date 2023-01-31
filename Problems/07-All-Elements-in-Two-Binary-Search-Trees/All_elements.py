class Solution:
    def getAllElements(self, root1, root2) :
        def inorder(node, res):
            if node:
                inorder(node.left, res)
                res.append(node.val)
                inorder(node.right, res)
        res,inor1,inor2 = [],[],[]  
        inorder(root1,inor1)
        inorder(root2,inor2)
        l1, r1 = 0, len(inor1)
        l2, r2 = 0, len(inor2)
        while True:
            if l1 == r1:
                res.extend(inor2[l2:])
                break
            if l2 == r2:
                res.extend(inor1[l1:])
                break
            if inor1[l1] < inor2[l2]:
                res.append(inor1[l1])
                l1 += 1
            else:
                res.append(inor2[l2])
                l2 += 1
        return res