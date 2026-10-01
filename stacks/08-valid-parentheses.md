# Valid Parentheses

- **Problem Name:** Valid Parentheses
- **Difficulty:** Easy
- **LeetCode Link:** [leetcode.com/problems/valid-parentheses](https://leetcode.com/problems/valid-parentheses/)
- **Approach:** Push each opening bracket onto a stack. For each closing bracket, require a matching opening bracket at the top; the input is valid only if the stack is empty at the end.
- **Time Complexity:** $O(n)$
- **Space Complexity:** $O(n)$
- **Notes:** The empty string is valid. Includes matching, mismatched, and empty-string tests.