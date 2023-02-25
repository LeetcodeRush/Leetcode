function findBall(grid: number[][]): number[] {
  let m = grid.length;
  let n = grid[0].length;
  let res: number[] = [];

  for (let i = 0; i < n; i++) {
    let x = 0,
      y = i;
    while (x < m) {
      if (grid[x][y] === 1) {
        if (y === n - 1) {
          break;
        } else if (grid[x][y + 1] === -1) {
          break;
        }
        x++;
        y++;
      } else {
        if (y === 0) {
          break;
        } else if (grid[x][y - 1] === 1) {
          break;
        }
        x++;
        y--;
      }
    }
    if (x === m) {
      res.push(y);
    } else res.push(-1);
  }
  return res;
}
