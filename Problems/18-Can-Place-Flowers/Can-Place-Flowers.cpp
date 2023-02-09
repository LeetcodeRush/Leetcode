class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        
        int m = flowerbed.size();
        if (n == 0) return true;
        int sum = 0;
        for (int j = 0; j < m; j++)
        {
            if ((j==0 or flowerbed[j-1] == 0) and (j == m-1 or flowerbed[j+1] == 0) and flowerbed[j] == 0)
            {
                flowerbed[j] = 1;
                sum++;
            }
        }
        
        return sum >= n;
    }
};