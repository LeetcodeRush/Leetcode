class Solution(object):
    def partitionLabels(self, s):
        """
        :type s: str
        :rtype: List[int]
        """
        last = [0] * 26
        for i in range(len(s)):
            last[ord(s[i]) - ord('a')] = i
        res = []
        left,right = 0,0
        for i in range(len(s)):
            right = max(right, last[ord(s[i]) - ord('a')])
            if i == right:
                res.append(right - left + 1)
                left = i + 1
        return res