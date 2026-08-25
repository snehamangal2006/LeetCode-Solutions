# Find the XOR of Numbers Which Appear Twice

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

You are given an array `nums`, where each number in the array appears  **either**  once or twice.

Return the bitwise `XOR` of all the numbers that appear twice in the array, or 0 if no number appears twice.

 

 **Example 1:** 

 **Input:**  nums = [1,2,1,3]

 **Output:**  1

 **Explanation:** 

The only number that appears twice in `nums` is 1.

 **Example 2:** 

 **Input:**  nums = [1,2,3]

 **Output:**  0

 **Explanation:** 

No number appears twice in `nums`.

 **Example 3:** 

 **Input:**  nums = [1,2,2,1]

 **Output:**  3

 **Explanation:** 

Numbers 1 and 2 appeared twice. `1 XOR 2 == 3`.

 

 **Constraints:** 

- 1 <= nums.length <= 50
- 1 <= nums[i] <= 50
- Each number in nums appears either once or twice.

## Solution

**Language:** C++  
**Runtime:** 2 ms (beats 38.03%)  
**Memory:** 28.4 MB (beats 8.08%)  
**Submitted:** 2026-08-25T16:43:42.224Z  

```cpp
class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        int n=nums.size();
        int freq[1001] = {0};
        for(int x: nums){
            freq[x]++;
        } int count=0;
         for(int i=0;i<1001;i++){
            if(freq[i]==2){
                count^=i;
            }
        } return count;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/find-the-xor-of-numbers-which-appear-twice/)