function searchRange(nums: number[], target: number): number[] {

    const max = binarySearch(nums, target, true);

    if (max !== undefined) {
        const min = binarySearch(nums, target, false);
        return [min!, max];
    }
    return [-1, -1];

    function binarySearch(nums: number[], target: number, flag: boolean): number | undefined {
        let position: number | undefined;
        let left = 0;
        let right = nums.length - 1;
        while (left <= right) {
            let mid = Math.floor((left + right) / 2);
            if (nums[mid] > target) {
                right = mid - 1;
            } else if (nums[mid] < target) {
                left = mid + 1;
            } else {
                position = mid;
                if (flag) {
                    left = left + 1;
                } else {
                    right = right - 1;
                }
            }
        }
        return position;
    }

};