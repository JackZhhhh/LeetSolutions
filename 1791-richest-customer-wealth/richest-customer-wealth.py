class Solution(object):
    def maximumWealth(self, accounts):
        """
        :type accounts: List[List[int]]
        :rtype: int
        """
        max_wealth = 0
        temp = 0
        for customer in accounts:
            for transaction in customer:
                temp += transaction
            if temp > max_wealth:
                max_wealth = temp
            temp = 0
        return max_wealth    

        