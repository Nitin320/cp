class Solution:
    def climbStairs(self, n: int) -> int:
        if n<=2:
            return n
        
        x = 1
        y = 2
        ans = 0
        for i in range(2,n):
            ans = x + y
            x = y
            y = ans
        return ans
