function waysToMakeFair(nums: number[]): number {
  const n: number = nums.length;
  nums.unshift(0);
  let leftEven: number[] = new Array(n + 1).fill(0);
  let leftOdd: number[] = new Array(n + 1).fill(0);
  let leftEvenSum = 0,
    leftOddSum = 0;
  for (let i = 1; i <= n; i++) {
    if (i % 2 === 0) leftEvenSum += nums[i];
    else leftOddSum += nums[i];
    leftEven[i] = leftEvenSum;
    leftOdd[i] = leftOddSum;
  }
  let rightEvenSum = 0,
    rightOddSum = 0;
  let res = 0;
  for (let i = n; i >= 1; i--) {
    if (leftEven[i - 1] + rightOddSum === leftOdd[i - 1] + rightEvenSum) {
      res++;
    }
    if (i % 2 === 0) rightEvenSum += nums[i];
    else rightOddSum += nums[i];
  }
  return res;
}
