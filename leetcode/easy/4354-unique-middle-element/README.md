# Unique Middle Element

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

You are given an integer array `nums` of odd length `n`.

Return `true` if the middle element of `nums` appears  **exactly**  once in the array. Otherwise return `false`.

 

 **Example 1:** 

 **Input:**  nums = [1,2,3]

 **Output:**  true

 **Explanation:** 

The middle element of `nums` is 2, which appears exactly once.

Thus, the answer is `true`.

 **Example 2:** 

 **Input:**  nums = [1,2,2]

 **Output:**  false

 **Explanation:** 

The middle element of `nums` is 2, which appears twice.

Thus, the answer is `false`.

 

 **Constraints:** 

- 1 <= n == nums.length <= 100
- n is odd.
- 1 <= nums[i] <= 100

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 31.1 MB (beats 87.60%)  
**Submitted:** 2026-08-08T17:54:39.247Z  

```cpp
class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int n = nums.size();
        int mid = n / 2;

        for (int i = 0; i < n; i++) {
            if (i != mid && nums[i] == nums[mid]) {
                return false;
            }
        }

        return true;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/unique-middle-element/)