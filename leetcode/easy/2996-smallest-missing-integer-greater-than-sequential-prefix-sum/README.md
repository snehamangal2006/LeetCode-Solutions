# Smallest Missing Integer Greater Than Sequential Prefix Sum

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

**Note:** The updated title is  **"Smallest Missing Integer Greater Than or Equal to Sequential Prefix Sum".** 

You are given a  **0-indexed**  array of integers `nums`.

A prefix `nums[0..i]` is  **sequential**  if, for all `1 <= j <= i`, `nums[j] = nums[j - 1] + 1`. In particular, the prefix consisting only of `nums[0]` is  **sequential**.

Return  *the  **smallest**  integer*  `x`  *missing from*  `nums`  *such that*  `x`  *is greater than or equal to the sum of the  **longest**  sequential prefix.* 

 

 **Example 1:** 

```
Input: nums = [1,2,3,2,5]
Output: 6
Explanation: The longest sequential prefix of nums is [1,2,3] with a sum of 6. 6 is not in the array, therefore 6 is the smallest missing integer greater than or equal to the sum of the longest sequential prefix.

```

 **Example 2:** 

```
Input: nums = [3,4,5,1,12,14,13]
Output: 15
Explanation: The longest sequential prefix of nums is [3,4,5] with a sum of 12. 12, 13, and 14 belong to the array while 15 does not. Therefore 15 is the smallest missing integer greater than or equal to the sum of the longest sequential prefix.

```

 

 **Constraints:** 

- 1 <= nums.length <= 50
- 1 <= nums[i] <= 50

## Solution

**Language:** C++  
**Runtime:** 3 ms (beats 24.32%)  
**Memory:** 23.1 MB (beats 28.62%)  
**Submitted:** 2026-10-18T06:18:16.804Z  

```cpp
class Solution {
public:
    int missingInteger(vector<int>& nums) {
         int prefixSum = nums[0];
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] == nums[i - 1] + 1) {
                prefixSum += nums[i];
            } else {
                break;
            }
        }
        unordered_set<int> seen(nums.begin(), nums.end());
         int x = prefixSum;
        while (seen.count(x)) {
            x++;
        }
        
        return x;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/smallest-missing-integer-greater-than-sequential-prefix-sum/)