# Q1. Sum of Integers with Maximum Digit Range

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

You are given an integer array `nums`.

The  **digit range**  of an integer is defined as the difference between its  **largest**  digit and  **smallest**  digit.

For example, the digit range of 5724 is `7 - 2 = 5`.

Return the sum of all integers in `nums` whose  **digit range**  is equal to the  **maximum digit range**  among all integers in the array.

 

 **Example 1:** 

 **Input:**  nums = [5724,111,350]

 **Output:**  6074

 **Explanation:** 

`i`	`nums[i]`	Largest	Smallest	Digit Range
0	5724	7	2	5
1	111	1	1	0
2	350	5	0	5

The maximum digit range is 5. The integers with this digit range are 5724 and 350, so the answer is `5724 + 350 = 6074`.

 **Example 2:** 

 **Input:**  nums = [90,900]

 **Output:**  990

 **Explanation:** 

`i`	`nums[i]`	Largest	Smallest	Digit Range
0	90	9	0	9
1	900	9	0	9

The maximum digit range is 9. Both integers have this digit range, so the answer is `90 + 900 = 990`.

 

 **Constraints:** 

- 1 <= nums.length <= 100
- 10 <= nums[i] <= 105

## Solution

**Language:** C++  
**Runtime:** 3 ms (beats 30.74%)  
**Memory:** 31.5 MB (beats 42.26%)  
**Submitted:** 2026-08-02T05:41:40.096Z  

```cpp
class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
        int n=nums.size();
        int maximum=INT_MIN;
        int sum=0;
        vector<pair<int, int>> ans;
        for(int i=0;i<n;i++){
        int maxi=INT_MIN;
        int mini=INT_MAX;
             int x = nums[i];  
            while(x!=0)
                {
                    int d = x%10;
                    x=x/10;
                    if(d>maxi) maxi=d;
                    if(d<mini) mini=d;
                }
                    ans.push_back({nums[i],maxi-mini});
            maximum = max(maximum,maxi-mini);
        } for(int i=0;i<n;i++){
        if (ans[i].second == maximum) {
                sum += ans[i].first;
            }
        }
            
        return sum;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/sum-of-integers-with-maximum-digit-range/)