# Best Time to Buy and Sell Stock

- **Problem Name:** Best Time to Buy and Sell Stock
- **Difficulty:** Easy
- **LeetCode Link:** [leetcode.com/problems/best-time-to-buy-and-sell-stock](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/)
- **Approach:** Scan prices once, keeping the minimum price from an earlier day and the largest profit found by selling today.
- **Time Complexity:** $O(n)$
- **Space Complexity:** $O(1)$
- **Notes:** Returns zero when no profitable transaction exists. Includes profitable and declining-price test cases.