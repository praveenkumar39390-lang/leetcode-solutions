# Valid Anagram

- **Problem Name:** Valid Anagram
- **Difficulty:** Easy
- **LeetCode Link:** [leetcode.com/problems/valid-anagram](https://leetcode.com/problems/valid-anagram/)
- **Approach:** Count each lowercase English letter in the first string and subtract the corresponding counts from the second. The strings are anagrams exactly when every count returns to zero.
- **Time Complexity:** $O(n)$
- **Space Complexity:** $O(1)$, using a fixed array of 26 counts.
- **Notes:** Assumes both strings contain lowercase English letters, matching the stated problem constraints. Includes two test cases.