class Solution:
    def longestValidParentheses(self, s: str) -> int:
        stack = [0]
        for c in s:
            if c == ')' and len(stack) >= 3 and stack[-2] == '(':
                num = stack.pop()
                stack.pop()
                stack[-1] += num + 2
            else:
                stack.append(c)
                stack.append(0)
        longest = [x for x in stack if type(x) is int]
        return num


s = Solution()
print(s.longestValidParentheses("[]){()}(]"))