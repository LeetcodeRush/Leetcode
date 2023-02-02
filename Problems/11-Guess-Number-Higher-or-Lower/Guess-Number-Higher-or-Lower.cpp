/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        if (n == 1) return 1;
        int left = 1, right = n;
        while (left <= right)
        {
            int mid = (right - left) / 2 + left;
            int res = guess(mid);
            if (res == 0) return mid;
            if (res == 1)
            {
                left = mid + 1;
            }
            else 
            {
                right = mid - 1;
            }
        }
        return left;
    }
};