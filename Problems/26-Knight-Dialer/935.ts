function knightDialer(n: number): number {
  let dp: number[][] = new Array(4).fill(new Array(3));
  const M = 1000000007;
  dp = [
    [1, 1, 1],
    [1, 1, 1],
    [1, 1, 1],
    [0, 1, 0],
  ];

  for (let i = 1; i < n; i++) {
    let newDp: number[][];
    newDp = [
      [
        (dp[2][1] + dp[1][2]) % M,
        (dp[2][0] + dp[2][2]) % M,
        (dp[1][0] + dp[2][1]) % M,
      ],
      [
        (dp[0][2] + dp[2][2] + dp[3][1]) % M,
        0,
        (dp[0][0] + dp[2][0] + dp[3][1]) % M,
      ],
      [
        (dp[0][1] + dp[1][2]) % M,
        (dp[0][0] + dp[0][2]) % M,
        (dp[1][0] + dp[0][1]) % M,
      ],
      [0, (dp[1][0] + dp[1][2]) % M, 0],
    ];
    dp = newDp;
  }
  let res = 0;
  for (let i = 0; i < 4; i++) {
    for (let j = 0; j < 3; j++) {
      res += dp[i][j];
    }
  }
  return res % 1000000007;
}
