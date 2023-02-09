function findMaxConsecutiveOnes(nums: number[]): number {
    let slow: number = 0, fast: number = 0;
    let res: number = 0;
    while (fast < nums.length) {
        if (nums[slow] !== 1 && nums[fast] !== 1) {
            slow++;
            fast++;
        }
        else if (nums[slow] === 1 && nums[fast] === 1) {
            fast++;
        }
        else if (nums[fast] !== 1) {
            slow = fast;
        }
        res = res > (fast - slow) ? res : (fast - slow);
    }
    return res;
};