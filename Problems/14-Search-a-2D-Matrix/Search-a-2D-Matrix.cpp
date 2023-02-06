class Solution {
public:
    int getValue(vector<vector<int>>& matrix, int mid)
    {
        int n = matrix.size();
        int m = matrix[0].size();
        int i = mid / m;
        int j = mid % m;
        return matrix[i][j];
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        int left = 0, right = n * m-1;
        while (left <= right)
        {
            int mid = (right - left)/2+left;
            int value = getValue(matrix, mid);
            if (target == value) return true;
            if (target < value) right = mid-1;
            else left = mid + 1;
        }
        return false;
    }
};