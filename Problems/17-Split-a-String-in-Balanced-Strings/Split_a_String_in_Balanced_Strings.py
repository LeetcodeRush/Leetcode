class Solution(object):
    def balancedStringSplit(self, s):
        """
        :type s: str
        :rtype: int
        """
        res, tmp = 0,0
        for char in s:
            if char == 'R':
                tmp += 1
            else:
                tmp -= 1
            if tmp == 0:
                res += 1
        return res