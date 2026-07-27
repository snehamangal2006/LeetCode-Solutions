# Maximum Product of Two Elements in an Array

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given the array of integers `nums`, you will choose two different indices `i` and `j` of that array.  *Return the maximum value of*  `(nums[i]-1)*(nums[j]-1)`.

 

 **Example 1:** 

```
Input: nums = [3,4,5,2]
Output: 12 
Explanation: If you choose the indices i=1 and j=2 (indexed from 0), you will get the maximum value, that is, (nums[1]-1) *(nums[2]-1) = (4-1)* (5-1) = 3*4 = 12. 

```

 **Example 2:** 

```
Input: nums = [1,5,4,5]
Output: 16
Explanation: Choosing the indices i=1 and j=3 (indexed from 0), you will get the maximum value of (5-1)*(5-1) = 16.

```

 **Example 3:** 

```
Input: nums = [3,7]
Output: 12

```

 

 **Constraints:** 

- 2 <= nums.length <= 500
- 1 <= nums[i] <= 10^3

## Solution

**Language:** C++  
**Runtime:** 3 ms (beats 20.55%)  
**Memory:** 13.5 MB (beats 25.65%)  
**Submitted:** 2026-07-27T06:57:33.274Z  

```cpp
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maximum=INT_MIN;
        int n=nums.size();
        for(int i=0;i<n-1;i++){
        int product=1;
            for(int j=i+1;j<n;j++){
                product= (nums[i]-1)*(nums[j]-1);
                maximum = max(maximum,product);
            }
        } return maximum;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/)