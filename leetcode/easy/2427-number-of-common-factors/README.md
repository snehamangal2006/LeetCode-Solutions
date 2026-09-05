# Number of Common Factors

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given two positive integers `a` and `b`, return  *the number of  **common**  factors of* `a` *and* `b`.

An integer `x` is a  **common factor**  of `a` and `b` if `x` divides both `a` and `b`.

 

 **Example 1:** 

```
Input: a = 12, b = 6
Output: 4
Explanation: The common factors of 12 and 6 are 1, 2, 3, 6.

```

 **Example 2:** 

```
Input: a = 25, b = 30
Output: 2
Explanation: The common factors of 25 and 30 are 1, 5.

```

 

 **Constraints:** 

- 1 <= a, b <= 1000

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 8.1 MB (beats 2.82%)  
**Submitted:** 2026-09-05T08:27:18.995Z  

```cpp
class Solution {
public:
    int commonFactors(int a, int b) {
        vector<int> c;
        vector<int> d;

        for(int i = 1; i <= a; i++) {
            if(a % i == 0) {
                c.push_back(i);
            }
        }

        for(int i = 1; i <= b; i++) {
            if(b % i == 0) {
                d.push_back(i);
            }
        }

        int count = 0;

        for(int i = 0; i < c.size(); i++) {
            for(int j = 0; j < d.size(); j++) {
                if(c[i] == d[j]) {
                    count++;
                }
            }
        }

        return count;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/number-of-common-factors/)