class Solution(object):
    def minFlipsMonoIncr(self, s):
        """
        :type s: str
        :rtype: int
        """
        
        #使得该分界点之前1的个数和分界点之后0的个数之和最小，把分界点之前的1变成0，之后的0变成1
        m=s.count('0')  
        res=[m]
        for x in s:
            if x=='1':  
                m+=1
            else:       
                m-=1
                res.append(m)        
        return min(res)