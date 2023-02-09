function searchMatrix(matrix: number[][], target: number): boolean {
    function searchMx(matrix: number[][], target: number): number {
        let left = 0, right = matrix.length - 1;
        while (left <= right) {
            let mid = Math.floor((left + right) / 2);
            let head = matrix[mid][0];
            let tail = matrix[mid][matrix[mid].length - 1];
            if (target > tail) left = mid + 1;
            else if (target < head) right = mid - 1;
            else if (target <= tail && target >= head) return mid;
        }
        return -1;
    }

    if (searchMx(matrix, target) === -1) return false;
    const arr = matrix[searchMx(matrix, target)];
    let left = 0;
    let right = arr.length - 1;
    while (left <= right) {
        let mid = Math.floor((left + right) / 2);
        if (arr[mid] > target) right = mid - 1;
        else if (arr[mid] < target) left = mid + 1;
        else return true;
    }
    return false;
};