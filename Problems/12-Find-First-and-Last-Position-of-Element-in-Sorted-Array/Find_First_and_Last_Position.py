class Solution(object):
    def searchRange(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        left = 0
        right = len(nums)-1
        def binarySearch(nums,target,left,right):
            while (left <= right):
                mid = left + (right-left) / 2
                if(target > nums[mid]):
                    left = mid + 1
                elif(target < nums[mid]):
                    right = mid -1
                else:
                    return mid
            return -1
        index = binarySearch(nums,target,left,right)
        if index == -1: return [-1,-1]
        index2 = index
        while index -1 >=0 and nums[index - 1] == target: index -=1
        while index2+1 < len(nums) and nums[index2 + 1] == target: index2 +=1
        return[index,index2]
        
            