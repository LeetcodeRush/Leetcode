class Solution(object):
    def knightDialer(self, n):
        """
        :type n: int
        :rtype: int
        """
        if n==1: 
            return 10
        #A:{1,3,7,9}, B:{2,8}, C:{4,6}, D:{0}
        # 处于状态A中的数字(1,3,7,9)通过一次跳跃要么变成状态B(2,8)，要么变成状态C(4,6)
        # 处于状态B中的数字(2,8)通过一次跳跃有两种方式变成状态A(1,3,7,9)
        # 处于状态C中的数字(4,6)通过一次跳跃有两种方式变成状态A(1,3,7,9)，还有一种方式变成状态D(0)
        # 处于状态D中的数字(0)通过一次跳跃有两种方式变成状态C(4,6)

        nums=[1,1,1,1]
        for _ in range(n-1):
            nums=[nums[1]+nums[2], 2*nums[0], 2*nums[0]+nums[3], 2*nums[2]]       
        return (4*nums[0]+2*nums[1]+2*nums[2]+nums[3])%1000000007
