function answerQueries(nums: number[], queries: number[]): number[] {
    nums = nums.sort((a, b) => a - b);
    let prefix: number[] = [nums[0]];
    let res: number[] = [];
    for (let i = 1; i < nums.length; i++) {
        prefix.push(prefix[i - 1] + nums[i]);
    }

    for (let target of queries) {
        let left: number = 0;
        let right: number = prefix.length;
        let mid: number;
        while (left < right) {
            mid = left + Math.floor((right - left) / 2);
            if (prefix[mid] > target) right = mid;
            else if (prefix[mid] === target) {
                left = mid + 1;
                break;
            }
            else left = mid + 1;
        }

        res.push(left);
    }
    return res;
};