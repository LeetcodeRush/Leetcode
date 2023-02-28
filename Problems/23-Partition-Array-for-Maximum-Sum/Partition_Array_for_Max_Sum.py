class Solution(object):
    def maxSumAfterPartitioning(self, arr, k):
        """
        :type arr: List[int]
        :type k: int
        :rtype: int
        """
        n = len(arr)
        res = [0] * (n+1)

        for i in range(1, n+1):
            max_val = 0
            for j in range(1, k+1):
                pos = i - j
                if pos < 0:
                    break
                if arr[pos] > max_val:
                    max_val = arr[pos]
                res[i] = max(res[i], max_val * j + res[pos])
        return res[-1]
       