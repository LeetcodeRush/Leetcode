function minFlipsMonoIncr(s: string): number {
  let countOne: number = 0;
  let flip: number = 0;
  for (let i of s) {
    if (i === "1") {
      countOne++;
    } else {
      flip++;
      flip = Math.min(countOne, flip);
    }
  }
  return flip;
}
