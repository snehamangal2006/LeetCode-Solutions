# Maximum Bags With Full Capacity of Rocks

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You have `n` bags numbered from `0` to `n - 1`. You are given two  **0-indexed**  integer arrays `capacity` and `rocks`. The `ith` bag can hold a maximum of `capacity[i]` rocks and currently contains `rocks[i]` rocks. You are also given an integer `additionalRocks`, the number of additional rocks you can place in  **any**  of the bags.

Return *the  **maximum**  number of bags that could have full capacity after placing the additional rocks in some bags.* 

 

 **Example 1:** 

```
Input: capacity = [2,3,4,5], rocks = [1,2,4,4], additionalRocks = 2
Output: 3
Explanation:
Place 1 rock in bag 0 and 1 rock in bag 1.
The number of rocks in each bag are now [2,3,4,4].
Bags 0, 1, and 2 have full capacity.
There are 3 bags at full capacity, so we return 3.
It can be shown that it is not possible to have more than 3 bags at full capacity.
Note that there may be other ways of placing the rocks that result in an answer of 3.

```

 **Example 2:** 

```
Input: capacity = [10,2,2], rocks = [2,2,0], additionalRocks = 100
Output: 3
Explanation:
Place 8 rocks in bag 0 and 2 rocks in bag 2.
The number of rocks in each bag are now [10,2,2].
Bags 0, 1, and 2 have full capacity.
There are 3 bags at full capacity, so we return 3.
It can be shown that it is not possible to have more than 3 bags at full capacity.
Note that we did not use all of the additional rocks.

```

 

 **Constraints:** 

- n == capacity.length == rocks.length
- 1 <= n <= 5 * 104
- 1 <= capacity[i] <= 109
- 0 <= rocks[i] <= capacity[i]
- 1 <= additionalRocks <= 109

## Solution

**Language:** C++  
**Runtime:** 15 ms (beats 74.86%)  
**Memory:** 88.4 MB (beats 96.05%)  
**Submitted:** 2026-09-16T11:13:59.255Z  

```cpp
// class Solution {
// public:
//     int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
//         int n=capacity.size();
//         // int sumofcapacity = accumulate(capacity.begin(),capacity.end(),0);
//         // if( sumofcapacity <= additionalRocks ) return n;

//         // vector<int> diff_of_weights(n);

//         for(int i=0;i<n;i++){
//             diff_of_weights.push_back(capacity[i]-rocks[i]);
//         }
            
//     }
// };
// #include <vector>
// #include <numeric>
// #include <algorithm>

// class Solution {
// public:
//     int maximumBags(std::vector<int>& capacity, std::vector<int>& rocks, int additionalRocks) {
//         int n = capacity.size();
//         std::vector<int> diff_of_weights(n);

//         // 1. Calculate how many rocks each bag needs
//         for (int i = 0; i < n; i++) {
//             diff_of_weights[i] = capacity[i] - rocks[i];
//         }

//         // 2. Sort to greedily fill bags needing the fewest rocks first
//         std::sort(diff_of_weights.begin(), diff_of_weights.end());

//         // 3. Fill bags starting from the smallest requirement
//         int fullBags = 0;
//         for (int i = 0; i < n; i++) {
//             if (additionalRocks >= diff_of_weights[i]) {
//                 additionalRocks -= diff_of_weights[i];
//                 fullBags++;
//             } else {
//                 break; // Not enough rocks left to complete any more bags
//             }
//         }

//         return fullBags;
//     }
// };
#include <vector>
#include <algorithm>

class Solution {
public:
    int maximumBags(std::vector<int>& capacity, std::vector<int>& rocks, int additionalRocks) {
        int n = capacity.size();
        
        
        for (int i = 0; i < n; i++) {
            capacity[i] -= rocks[i];
        }

       
        std::sort(capacity.begin(), capacity.end());

      
        int fullBags = 0;
        for (int i = 0; i < n; i++) {
            if (additionalRocks >= capacity[i]) {
                additionalRocks -= capacity[i];
                fullBags++;
            } else {
                break;
            }
        }

        return fullBags;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/maximum-bags-with-full-capacity-of-rocks/)