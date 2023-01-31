function searchInsert(nums: number[], target: number): number {

    let left: number = 0;
    let right: number = nums.length;
    let mid: number
    while (left < right) {
        mid = left + Math.floor((right - left) / 2);
        if (nums[mid] >= target) right = mid;
        else left = mid + 1;

    }
    return left;

};