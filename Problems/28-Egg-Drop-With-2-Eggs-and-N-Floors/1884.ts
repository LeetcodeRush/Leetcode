function twoEggDrop(n: number): number {

    let dp : number[][] = Array.from(Array(3), () => new Array(n+1))

    dp[1][0] = 0;
    dp[2][0] = 0;

    for(let i = 1; i <= n; i++) {
        dp[1][i] = i;
    }

    for(let i = 1; i <= n; i++) {
        for(let j = 1; j <= i; j++) {
            dp[2][i] = dp[2][i]!==undefined? Math.min(dp[2][i], 1+Math.max(dp[1][j-1],dp[2][i-j])) : 1+Math.max(dp[1][j-1],dp[2][i-j])
        }
    }

    return dp[2][n];


};