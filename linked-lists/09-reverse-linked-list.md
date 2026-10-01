# Reverse Linked List

- **Problem Name:** Reverse Linked List
- **Difficulty:** Easy
- **LeetCode Link:** [leetcode.com/problems/reverse-linked-list](https://leetcode.com/problems/reverse-linked-list/)
- **Approach:** Traverse the list once while keeping the previous node, current node, and next node. Redirect each node's `next` pointer to the previous node, then return the former tail.
- **Time Complexity:** $O(n)$
- **Space Complexity:** $O(1)$ auxiliary space.
- **Notes:** Reverses the list in place. The standalone program tests lists of five and two nodes, and also checks the empty-list case.