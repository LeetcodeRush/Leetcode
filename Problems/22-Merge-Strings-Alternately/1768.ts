function mergeAlternately(word1: string, word2: string): string {
  let ptr1: number = 0;
  let ptr2: number = 0;
  const len1 = word1.length;
  const len2 = word2.length;
  let res: string[] = [];
  while (ptr1 < len1 || ptr2 < len2) {
    if (ptr1 < len1 && ptr2 < len2) {
      res.push(word1[ptr1++]);
      res.push(word2[ptr2++]);
    } else if (ptr1 > len1 || ptr2 < len2) {
      res.push(word2[ptr2++]);
    } else if (ptr1 < len1 || ptr2 > len2) {
      res.push(word1[ptr1++]);
    }
  }
  return res.join("");
}
