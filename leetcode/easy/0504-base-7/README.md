# Base 7

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an integer `num`, return  *a string of its  **base 7**  representation*.

 

 **Example 1:** 

```
Input: num = 100
Output: "202"

```

 **Example 2:** 

```
Input: num = -7
Output: "-10"

```

 

 **Constraints:** 

- -107 <= num <= 107

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 8.2 MB (beats 23.69%)  
**Submitted:** 2026-10-01T06:24:21.072Z  

```cpp

class Solution {
public:
    string convertToBase7(int num) {
        if (num == 0) return "0";
        
        bool isNegative = num < 0;
        num = abs(num);
        
        string result = "";
        while (num > 0) {
            int remainder = num % 7;
            result += to_string(remainder); 
            num /= 7;
        }
        
        if (isNegative) {
            result += "-";
        }
       
        reverse(result.begin(), result.end());
        return result;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/base-7/)