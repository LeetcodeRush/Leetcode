class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int m = arr2.size();
        int ans = 0;
        sort(arr2.begin(), arr2.end());
        for (auto x: arr1)
        {
            int left = 0, right = m-1;
            int index = m-1;
            while (left <= right)
            {
                int mid = (right - left) / 2 + left;
                if (arr2[mid] == x) 
                {
                    index = mid;
                    break;
                }
                else if (arr2[mid] < x)
                {
                    left = mid + 1;
                }
                else // (arr2[mid] > x)
                {
                    index = mid;
                    right = mid - 1;
                }
            }

            if (abs(arr2[index]-x) > d && (index - 1 < 0 || abs(arr2[index-1] -x) > d))
            {
                ans += 1;
            } 
            
        }
        return ans;
    }
};