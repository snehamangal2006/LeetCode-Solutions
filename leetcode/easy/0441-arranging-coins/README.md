# Arranging Coins

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

You have `n` coins and you want to build a staircase with these coins. The staircase consists of `k` rows where the `ith` row has exactly `i` coins. The last row of the staircase  **may be**  incomplete.

Given the integer `n`, return  *the number of  **complete rows**  of the staircase you will build*.

 

 **Example 1:** 

```
Input: n = 5
Output: 2
Explanation: Because the 3rd row is incomplete, we return 2.

```

 **Example 2:** 

```
Input: n = 8
Output: 3
Explanation: Because the 4th row is incomplete, we return 3.

```

 

 **Constraints:** 

- 1 <= n <= 231 - 1

## Solution

**Language:** C++  
**Runtime:** 7 ms (beats 13.02%)  
**Memory:** 8.9 MB (beats 2.28%)  
**Submitted:** 2026-09-30T10:00:58.606Z  

```cpp
class Solution {
public:
    int arrangeCoins(int n) {
        int count =0;
        for(int i=1;i<=n;i++){
            if(i<=n){
                n = n-i;
                count++;
            } else break;
        } return count;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/arranging-coins/)