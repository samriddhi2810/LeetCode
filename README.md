# C++ Placement Practice

An ordered practice log for building interview problem-solving skills in C++17.

## Current progress

- [x] [1. Two Sum](https://leetcode.com/problems/two-sum/) — [brute-force solution](arrays-and-hashing/0001-two-sum.cpp), O(n²) time and O(1) auxiliary space.
- All roadmap entries below are pending **in this repository**. Problems solved elsewhere can be revisited and uploaded; unchecked does not mean never attempted.
- The original nested-loop approach is preserved; formatting, compilable headers, and complexity notes have been added.

## Start here: exact next steps

1. **217. Contains Duplicate** — practice `unordered_set`.
2. **242. Valid Anagram** — practice frequency counting.
3. **Revisit 1. Two Sum** — write your own `unordered_map` version with average O(n) time.
4. **121. Best Time to Buy and Sell Stock** — track the best value seen so far.
5. **169. Majority Element** — start with counting; then learn constant-space voting.

Then continue in the order below. This is a focused first pass, not an exhaustive interview syllabus.

## Ordered roadmap

Follow the global order across topics. Difficulty is the LeetCode problem difficulty; the Two Sum follow-up remains Easy.

### Arrays and hashing

Folder: `arrays-and-hashing/` (create when adding its first solution).

| Order | Uploaded | Problem | Difficulty | Focus |
| --- | --- | --- | --- | --- |
| 1 | [ ] | [217. Contains Duplicate](https://leetcode.com/problems/contains-duplicate/) | Easy | Set membership |
| 2 | [ ] | [242. Valid Anagram](https://leetcode.com/problems/valid-anagram/) | Easy | Frequency counting |
| 3 | [ ] | [1. Two Sum — hashing follow-up](https://leetcode.com/problems/two-sum/) | Easy | Revisit using unordered_map; average O(n) |
| 4 | [ ] | [121. Best Time to Buy and Sell Stock](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/) | Easy | Running minimum |
| 5 | [ ] | [169. Majority Element](https://leetcode.com/problems/majority-element/) | Easy | Counting, then Boyer–Moore |
| 6 | [ ] | [53. Maximum Subarray](https://leetcode.com/problems/maximum-subarray/) | Medium | Kadane's algorithm |
| 7 | [ ] | [238. Product of Array Except Self](https://leetcode.com/problems/product-of-array-except-self/) | Medium | Prefix/suffix products |

### Two pointers

Folder: `two-pointers/` (create when adding its first solution).

| Order | Uploaded | Problem | Difficulty | Focus |
| --- | --- | --- | --- | --- |
| 8 | [ ] | [283. Move Zeroes](https://leetcode.com/problems/move-zeroes/) | Easy | Read/write pointers |
| 9 | [ ] | [26. Remove Duplicates from Sorted Array](https://leetcode.com/problems/remove-duplicates-from-sorted-array/) | Easy | In-place compaction |
| 10 | [ ] | [125. Valid Palindrome](https://leetcode.com/problems/valid-palindrome/) | Easy | Opposite-end pointers |
| 11 | [ ] | [167. Two Sum II - Input Array Is Sorted](https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/) | Medium | Sorted pair search |
| 12 | [ ] | [15. 3Sum](https://leetcode.com/problems/3sum/) | Medium | Sorting and duplicate handling |

### Sliding window

Folder: `sliding-window/` (create when adding its first solution).

| Order | Uploaded | Problem | Difficulty | Focus |
| --- | --- | --- | --- | --- |
| 13 | [ ] | [643. Maximum Average Subarray I](https://leetcode.com/problems/maximum-average-subarray-i/) | Easy | Fixed-size window |
| 14 | [ ] | [209. Minimum Size Subarray Sum](https://leetcode.com/problems/minimum-size-subarray-sum/) | Medium | Variable window; positive numbers |
| 15 | [ ] | [3. Longest Substring Without Repeating Characters](https://leetcode.com/problems/longest-substring-without-repeating-characters/) | Medium | Window with character tracking |
| 16 | [ ] | [1004. Max Consecutive Ones III](https://leetcode.com/problems/max-consecutive-ones-iii/) | Medium | Window with at most k zeros |

### Prefix sums

Folder: `prefix-sums/` (create when adding its first solution).

| Order | Uploaded | Problem | Difficulty | Focus |
| --- | --- | --- | --- | --- |
| 17 | [ ] | [1480. Running Sum of 1d Array](https://leetcode.com/problems/running-sum-of-1d-array/) | Easy | Cumulative sums |
| 18 | [ ] | [724. Find Pivot Index](https://leetcode.com/problems/find-pivot-index/) | Easy | Left/right sum relationship |
| 19 | [ ] | [560. Subarray Sum Equals K](https://leetcode.com/problems/subarray-sum-equals-k/) | Medium | Prefix sum frequency map |
| 20 | [ ] | [974. Subarray Sums Divisible by K](https://leetcode.com/problems/subarray-sums-divisible-by-k/) | Medium | Remainder frequencies; negative modulo |

### Binary search

Folder: `binary-search/` (create when adding its first solution).

| Order | Uploaded | Problem | Difficulty | Focus |
| --- | --- | --- | --- | --- |
| 21 | [ ] | [704. Binary Search](https://leetcode.com/problems/binary-search/) | Easy | Search boundaries |
| 22 | [ ] | [35. Search Insert Position](https://leetcode.com/problems/search-insert-position/) | Easy | Insertion boundary |
| 23 | [ ] | [33. Search in Rotated Sorted Array](https://leetcode.com/problems/search-in-rotated-sorted-array/) | Medium | Identify the sorted half |

### Stack, linked list, trees, and dynamic programming

Folder: `other-patterns/` (create when adding its first solution).

| Order | Uploaded | Problem | Difficulty | Focus |
| --- | --- | --- | --- | --- |
| 24 | [ ] | [20. Valid Parentheses](https://leetcode.com/problems/valid-parentheses/) | Easy | Stack |
| 25 | [ ] | [206. Reverse Linked List](https://leetcode.com/problems/reverse-linked-list/) | Easy | Pointer rewiring |
| 26 | [ ] | [141. Linked List Cycle](https://leetcode.com/problems/linked-list-cycle/) | Easy | Slow/fast pointers |
| 27 | [ ] | [104. Maximum Depth of Binary Tree](https://leetcode.com/problems/maximum-depth-of-binary-tree/) | Easy | DFS recursion |
| 28 | [ ] | [102. Binary Tree Level Order Traversal](https://leetcode.com/problems/binary-tree-level-order-traversal/) | Medium | BFS queue |
| 29 | [ ] | [70. Climbing Stairs](https://leetcode.com/problems/climbing-stairs/) | Easy | DP state and transition |
| 30 | [ ] | [198. House Robber](https://leetcode.com/problems/house-robber/) | Medium | Take/skip DP |

## Repository conventions

- Group solutions by their main pattern; avoid duplicating the same solution across folders.
- Use `<topic>/<four-digit-id>-<problem-slug>.cpp`, for example `sliding-window/1004-max-consecutive-ones-iii.cpp`.
- Keep LeetCode's `class Solution` interface, include required standard headers, and use C++17. A `main()` is only needed for a separate local test harness.
- Put the problem link, approach, time complexity, and auxiliary space complexity in comments.
- For Two Sum's follow-up, add `arrays-and-hashing/0001-two-sum-hash.cpp` after attempting it independently.
- Mark a roadmap row `[x]` and add a relative solution link only after uploading your own tested solution. Do not add empty solution files.

## Daily practice

Solve at least one problem, or make a serious attempt for 30 minutes before seeking progressive hints. Write the approach first, dry-run it, and test duplicates, small inputs, and boundary cases permitted by the problem. Record mistakes and re-solve without notes after 2 days and 7 days.

For C++, learn `vector`, `string`, `sort`, `unordered_map`, `unordered_set`, `stack`, and `queue` as the relevant topic appears. Prefer explaining one correct solution and its complexity over rushing through several.

Once this pass is comfortable, extend to intervals, heaps, graph BFS/DFS, backtracking, and further DP.
