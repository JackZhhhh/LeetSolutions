class Solution(object):
    def kidsWithCandies(self, candies, extraCandies):
        """
        :type candies: List[int]
        :type extraCandies: int
        :rtype: List[bool]
        """
        import numpy as np
        largest = max(candies)
        ans = []
        for candy in candies:
            if(candy + extraCandies >= largest):
                ans.append(True)
            else:
                ans.append(False)
        return ans
            
        