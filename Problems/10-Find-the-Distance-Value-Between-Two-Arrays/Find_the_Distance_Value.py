# The guess API is already defined for you.
# @param num, your guess
# @return -1 if num is higher than the picked number
#          1 if num is lower than the picked number
#          otherwise return 0
# def guess(num):

class Solution(object):
    def guessNumber(self, n):
        """
        :type n: int
        :rtype: int
        """
        min, max = 1, n
        while min < max:
            mid = (min + max) // 2
            res = guess(mid)
            if res == 0:
                return mid
            elif res < 0:
                max = mid  
            else:
                min = mid + 1  
        
        return min