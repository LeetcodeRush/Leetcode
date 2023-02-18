class Solution(object):
    def mergeAlternately(self, word1, word2):
        """
        :type word1: str
        :type word2: str
        :rtype: str
        """
        l1 = len(word1)
        l2 = len(word2)
        i,j = 0,0
        res = list()
        while i < l1 or j < l2:
            if i < l1:
                res.append(word1[i])
                i += 1
            if j < l2:
                res.append(word2[j])
                j += 1
        
        return "".join(res)