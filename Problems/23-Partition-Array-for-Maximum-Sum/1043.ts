function maxSumAfterPartitioning(arr: number[], k: number): number {
  let dp: number[] = [];
  dp[0] = 0;
  dp[1] = arr[0];
  for (let i = 1; i <= arr.length; i++) {
    let m = -1;
    for (let j = 1; j <= Math.min(i, k); j++) {
      m = Math.max(m, arr[i - j]);
      dp[i] = dp[i] ? Math.max(dp[i], dp[i - j] + m * j) : dp[i - j] + m * j;
    }
  }
  return dp[arr.length];
}
