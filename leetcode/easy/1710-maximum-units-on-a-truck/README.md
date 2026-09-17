# Maximum Units on a Truck

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

You are assigned to put some amount of boxes onto  **one truck**. You are given a 2D array `boxTypes`, where `boxTypes[i] = [numberOfBoxesi, numberOfUnitsPerBoxi]`:

- numberOfBoxesi is the number of boxes of type i.
- numberOfUnitsPerBoxi is the number of units in each box of the type i.

You are also given an integer `truckSize`, which is the  **maximum**  number of  **boxes**  that can be put on the truck. You can choose any boxes to put on the truck as long as the number of boxes does not exceed `truckSize`.

Return  *the  **maximum**  total number of  **units**  that can be put on the truck.* 

 

 **Example 1:** 

```
Input: boxTypes = [[1,3],[2,2],[3,1]], truckSize = 4
Output: 8
Explanation: There are:
- 1 box of the first type that contains 3 units.
- 2 boxes of the second type that contain 2 units each.
- 3 boxes of the third type that contain 1 unit each.
You can take all the boxes of the first and second types, and one box of the third type.
The total number of units will be = (1  *3) + (2*  2) + (1 * 1) = 8.

```

 **Example 2:** 

```
Input: boxTypes = [[5,10],[2,5],[4,7],[3,9]], truckSize = 10
Output: 91

```

 

 **Constraints:** 

- 1 <= boxTypes.length <= 1000
- 1 <= numberOfBoxesi, numberOfUnitsPerBoxi <= 1000
- 1 <= truckSize <= 106

## Solution

**Language:** C++  
**Runtime:** 4 ms (beats 50.28%)  
**Memory:** 19.9 MB (beats 65.92%)  
**Submitted:** 2026-09-17T19:05:52.408Z  

```cpp
#include <vector>
#include <algorithm>

class Solution {
public:
    int maximumUnits(std::vector<std::vector<int>>& boxTypes, int truckSize) {
        
        std::sort(boxTypes.begin(), boxTypes.end(), [](const std::vector<int>& a, const std::vector<int>& b) {
            return a[1] > b[1];
        });

        int ans = 0;

        for (const auto& box : boxTypes) {
            int numberOfBoxes = box[0];
            int numberOfUnitsPerBox = box[1];

            if (numberOfBoxes <= truckSize) {
                ans += numberOfBoxes * numberOfUnitsPerBox;
                truckSize -= numberOfBoxes;
            } else {
                ans += truckSize * numberOfUnitsPerBox;
                truckSize = 0;
                break; // Truck is full
            }
        }

        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/maximum-units-on-a-truck/)