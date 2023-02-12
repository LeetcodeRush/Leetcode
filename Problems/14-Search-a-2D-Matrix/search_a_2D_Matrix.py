class Solution(object):
    def searchMatrix(self, matrix, target):
        """
        :type matrix: List[List[int]]
        :type target: int
        :rtype: bool
        """
        k = 0
        
        for i in range(len(matrix)):
            if(target ==  matrix[i][0]): return True
            if(target>  matrix[i][0]): k = i   
        for j in range(1,len(matrix[k])):
            if(target == matrix[k][j]): return True
        return False