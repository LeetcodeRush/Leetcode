import bisect

class Solution:
    def findTheDistanceValue1(self, arr1, arr2, d):
        """
        :type arr1: List[int]
        :type arr2: List[int]
        :type d: int
        :rtype: int
        """
        return sum(all(abs(x - y) > d for y in arr2) for x in arr1)

        
    def findTheDistanceValue(self, arr1, arr2, d):
        arr2.sort()
        res = 0
        for n in arr1:
            i = bisect.bisect_left(arr2, n)
            if (i >= len(arr2) or arr2[i]-n > d) and (i == 0 or n - arr2[i-1] > d):
                res += 1
        return res
