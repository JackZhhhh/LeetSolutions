class Solution(object):
    def runningSum(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        ans = []
        running_total = 0
        for num in nums:
            running_total +=num
            ans.append(running_total)
        return ans
        