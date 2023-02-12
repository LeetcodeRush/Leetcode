class Solution(object):
    def longestOnes(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: int
        """
        left    ,right = 0,0
        res = 0
        while(right<len(nums)):
            if(nums[right] == 0):
                k-=1
            right+=1
            while(k<0):
                if(nums[left]==0):
                    k+=1
                left+=1
            res = max(res,right-left)
        return res