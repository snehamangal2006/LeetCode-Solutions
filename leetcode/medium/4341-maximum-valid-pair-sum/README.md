# Q2. Maximum Valid Pair Sum

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are given an integer array `nums` of length `n` and an integer `k`.

A pair of indices `(i, j)` is called  **valid**  if:

- 0 <= i < j < n
- j - i >= k

Return the  **maximum**  value of `nums[i] + nums[j]` among all valid pairs.

 

 **Example 1:** 

 **Input:**  nums = [1,3,5,2,8], k = 2

 **Output:**  13

 **Explanation:** 

The valid pairs are:

- (0, 2): nums[0] + nums[2] = 6
- (0, 3): nums[0] + nums[3] = 3
- (0, 4): nums[0] + nums[4] = 9
- (1, 3): nums[1] + nums[3] = 5
- (1, 4): nums[1] + nums[4] = 11
- (2, 4): nums[2] + nums[4] = 13

Thus, the answer is 13.​​​​​​​

 **Example 2:** 

 **Input:**  nums = [5,1,9], k = 1

 **Output:**  14

 **Explanation:** 

- Since k = 1, every pair is valid.
- The maximum value is obtained from a pair (0, 2)​​​​​​​, which is nums[0] + nums[2] = 5 + 9 = 14.
- Thus, the answer is 14.

 

 **Constraints:** 

- 2 <= n == nums.length <= 105
- 1 <= nums[i] <= 109
- 1 <= k <= n - 1

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 205.5 MB (beats 77.01%)  
**Submitted:** 2026-08-08T18:22:18.087Z  

```cpp
class Solution {
public:
    int maxValidPairSum(vector<int>& nums, int k) {
        int n = nums.size();
        int maxi = INT_MIN;
        int best = INT_MIN;

        for (int j = k; j < n; j++) {
            // nums[j-k] is newly eligible
            best = max(best, nums[j-k]);

            // Pair it with nums[j]
            maxi = max(maxi, best + nums[j]);
        }

        return maxi;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/maximum-valid-pair-sum/)