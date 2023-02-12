class Solution(object):
    def maximumTastiness(self, price, k):
        """
        :type price: List[int]
        :type k: int
        :rtype: int
        """
        price.sort()
        def check(d):
            cnt, x0 = 1, price[0]
            for x in price:
                if x -  x0 >= d:
                    cnt += 1
                    x0 = x
            return cnt >= k

        left = 0
        right = price[-1]-price[0]
        while(left < right):
            mid = (left+right+1)//2
            if check(mid): left = mid
            else: right = mid-1
        return left
