# Longest Common Prefix

- **Problem Name:** Longest Common Prefix
- **Difficulty:** Easy
- **LeetCode Link:** [leetcode.com/problems/longest-common-prefix](https://leetcode.com/problems/longest-common-prefix/)
- **Approach:** Start with the first string as the candidate prefix, compare it character by character with each remaining string, and shrink the candidate to the matching length.
- **Time Complexity:** $O(S)$, where $S$ is the total number of characters examined.
- **Space Complexity:** $O(m)$ for the returned prefix, where $m$ is its length.
- **Notes:** The returned prefix is heap-allocated and must be freed by the caller. Includes common-prefix and no-common-prefix cases.