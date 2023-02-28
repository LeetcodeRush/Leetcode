class Solution(object):
    def findBall(self, grid):
        """
        :type grid: List[List[int]]
        :rtype: List[int]
        """
        n = len(grid[0])
        ans = [-1] * n
        for i in range(n):
            col = i 
            print(col) 
            for row in grid:
                dir = row[col]
                col += dir 
                if col < 0 or col == n or row[col] != dir: 
                    break
            else:  
                ans[i] = col
        return ans
              
               
   
                    
           
grid = [[1,1,1,-1,-1],[1,1,1,-1,-1],[-1,-1,-1,1,1],[1,1,1,1,-1],[-1,-1,-1,-1,-1]]
print(Solution().findBall(grid))