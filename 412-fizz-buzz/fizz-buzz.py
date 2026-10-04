class Solution(object):
    def fizzBuzz(self, n):
        """
        :type n: int
        :rtype: List[str]
        """
        ans = []
        for i in range(n+1):
            if i == 0:
                pass
            elif i %3 == 0:
                if i % 5 == 0: 
                    ans.append("FizzBuzz")
                else:
                    ans.append("Fizz")
            elif i % 5 == 0:
                ans.append("Buzz")
            else:
                ans.append(str(i))
        return ans