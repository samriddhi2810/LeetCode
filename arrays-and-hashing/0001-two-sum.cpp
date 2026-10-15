// LeetCode 1: Two Sum (Easy)
// https://leetcode.com/problems/two-sum/
// Pattern: arrays; brute-force pair search
// Time: O(n^2). Auxiliary space: O(1), excluding the returned indices.
// Checks each pair once; j starts at i + 1 so an element is never reused.
// Follow-up practice: implement an average O(n) solution using unordered_map.

#include <vector>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        const int n = static_cast<int>(nums.size());
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }
        return {};
    }
};
