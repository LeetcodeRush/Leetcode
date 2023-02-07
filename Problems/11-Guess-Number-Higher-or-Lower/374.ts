/** 
 * Forward declaration of guess API.
 * @param {number} num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * var guess = function(num) {}
 */


function guessNumber(n: number): number {
    let right = n + 1;
    let left = 0;
    while (left < right) {
        let mid = Math.floor((left + right) / 2);
        if (guess(mid) === 0) return mid;
        else if (guess(mid) === -1) right = mid;
        else if (guess(mid) === 1) left = mid + 1;
    }

};