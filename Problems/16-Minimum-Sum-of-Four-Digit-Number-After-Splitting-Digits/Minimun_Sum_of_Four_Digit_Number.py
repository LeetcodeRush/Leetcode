class Solution(object):
    def minimumSum(self, num):
        """
        :type num: int
        :rtype: int
        """
        res = []
        while num:
            res.append(num%10)
            num/=10
        res.sort()
        return res[0]*10+res[2]+ res[1]*10+res[3]