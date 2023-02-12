class Solution(object):
    def partitionString(self, s):
        """
        :type s: str
        :rtype: int
        """
        res = 1
        tmp = []
        for char in s:
            if char in tmp:
                tmp = [char]
                res +=1
            else:
                tmp.append(char)
        return res
