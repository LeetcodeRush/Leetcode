class Solution(object):
    def searchInsert(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """
        l = len(nums)
        i = 0 
        j = l-1
        res = l
        while (i<=j):
            mid = (i+j)/2
            if target == nums[mid]: 
                res = mid
                break
            elif target < nums[mid]: 
                res = mid
                j = mid -1
            else: i = mid+1
        return res
