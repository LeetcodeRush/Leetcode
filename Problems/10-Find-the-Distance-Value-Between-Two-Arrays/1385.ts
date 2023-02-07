function findTheDistanceValue(arr1: number[], arr2: number[], d: number): number {

    function isValid(arr: number[], target: number, d: number): boolean {
        let left = 0;
        let right = arr.length-1;
        while(left <= right) {
            let mid = left + Math.floor((right-left/2));
            if(Math.abs(target-arr[mid]) <= d) {
                return false;
            } else if(arr[mid] > target) {
                right = mid - 1 ;
            } else {
                left = mid + 1;
            }
        }
        return true;
    }
    arr2= arr2.sort((a,b)=>a-b);
    let res = 0;

    for(let i of arr1) {
        if( isValid(arr2, i, d)){
            res++;
        }
    }
    return res;
};