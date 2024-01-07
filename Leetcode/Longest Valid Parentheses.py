class Solution:
    def longestValidParentheses(self, s: str) -> int:
        
        l, r = 0, 0
        m = 0

        for i in range(0, len(s)-1):
            if s[i] == '(':
                l += 1
            else:
                r += 1
            if(l == r):
                m = max(m, l*2)
            elif r > l:
                l, r = 0, 0
        
        l, r = 0, 0

        for i in range(len(s)-1, -1, -1):
            if s[i] == '(':
                l += 1
            else:
                r += 1
            if(l == r):
                m = max(m, l*2)
            elif l > r:
                l, r = 0, 0

        return m
