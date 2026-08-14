# Reverse Integer

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given a signed 32-bit integer `x`, return `x` *with its digits reversed*. If reversing `x` causes the value to go outside the signed 32-bit integer range `[-231, 231 - 1]`, then return `0`.

 **Assume the environment does not allow you to store 64-bit integers (signed or unsigned).** 

 

 **Example 1:** 

```
Input: x = 123
Output: 321

```

 **Example 2:** 

```
Input: x = -123
Output: -321

```

 **Example 3:** 

```
Input: x = 120
Output: 21

```

 

 **Constraints:** 

- -231 <= x <= 231 - 1

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 8.3 MB (beats 98.36%)  
**Submitted:** 2026-08-14T17:58:37.895Z  

```cpp
class Solution {
public:
    int reverse(int x) {
       long long r=0;
        while(x!=0){
            int d=x%10;
            r=r*10+d;
            x=x/10;
        } if(r<INT_MIN || r>INT_MAX)
        return 0;
        return (int)r;
        
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/reverse-integer/)