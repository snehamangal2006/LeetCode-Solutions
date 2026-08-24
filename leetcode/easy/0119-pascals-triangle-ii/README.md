# Pascal's Triangle II

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an integer `rowIndex`, return the `rowIndexth` (**0-indexed**) row of the  **Pascal's triangle**.

In  **Pascal's triangle**, each number is the sum of the two numbers directly above it as shown:

 

 **Example 1:** 

```
Input: rowIndex = 3
Output: [1,3,3,1]

```

 **Example 2:** 

```
Input: rowIndex = 0
Output: [1]

```

 **Example 3:** 

```
Input: rowIndex = 1
Output: [1,1]

```

 

 **Constraints:** 

- 0 <= rowIndex <= 33

 

 **Follow up:**  Could you optimize your algorithm to use only `O(rowIndex)` extra space?

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 8.9 MB (beats 50.43%)  
**Submitted:** 2026-08-24T03:02:28.814Z  

```cpp
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ans;
        long long val = 1;

        for (int k = 0; k <= rowIndex; k++) {
            ans.push_back(val);
            val = val * (rowIndex - k) / (k + 1);
        }

        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/pascals-triangle-ii/)