class Solution(object):
    def mergeAlternately(self, word1, word2):
        """
        :type word1: str
        :type word2: str
        :rtype: str
        """
        ans = ""
        i,j= 0,0
        for _ in range(len(word1 + word2)):
            if i < len(word1):
                ans += word1[i]
                i+=1
            if j < len(word2):
                ans += word2[j]
                j+=1
        return ans


        