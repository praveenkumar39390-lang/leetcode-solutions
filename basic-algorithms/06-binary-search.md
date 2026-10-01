# Binary Search

- **Problem Name:** Binary Search
- **Difficulty:** Easy
- **LeetCode Link:** [leetcode.com/problems/binary-search](https://leetcode.com/problems/binary-search/)
- **Approach:** Maintain an inclusive interval in the sorted array. Compare the middle value with the target and discard the half that cannot contain it.
- **Time Complexity:** $O(\log n)$
- **Space Complexity:** $O(1)$
- **Notes:** The input must be sorted in ascending order. Returns `-1` when the target is absent. Includes found and not-found test cases.