class Solution(object):
    def minFlips(self, target):
        """
        :type target: str
        :rtype: int
        """
        res= 0
        s ="0"
        for c in target:
            if c != s:
                res += 1
                s = c
        return res