# Maximum Tastiness of Candy Basket

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are given an array of positive integers `price` where `price[i]` denotes the price of the `ith` candy and a positive integer `k`.

The store sells baskets of `k`  **distinct**  candies. The  **tastiness**  of a candy basket is the smallest absolute difference of the  **prices**  of any two candies in the basket.

Return  *the  **maximum**  tastiness of a candy basket.* 

 

 **Example 1:** 

```
Input: price = [13,5,1,8,21,2], k = 3
Output: 8
Explanation: Choose the candies with the prices [13,5,21].
The tastiness of the candy basket is: min(|13 - 5|, |13 - 21|, |5 - 21|) = min(8, 8, 16) = 8.
It can be proven that 8 is the maximum tastiness that can be achieved.

```

 **Example 2:** 

```
Input: price = [1,3,1], k = 2
Output: 2
Explanation: Choose the candies with the prices [1,3].
The tastiness of the candy basket is: min(|1 - 3|) = min(2) = 2.
It can be proven that 2 is the maximum tastiness that can be achieved.

```

 **Example 3:** 

```
Input: price = [7,7,7,7], k = 2
Output: 0
Explanation: Choosing any two distinct candies from the candies we have will result in a tastiness of 0.

```

 

 **Constraints:** 

- 2 <= k <= price.length <= 105
- 1 <= price[i] <= 109

## Solution

**Language:** C++  
**Runtime:** 53 ms (beats 27.61%)  
**Memory:** 51.9 MB (beats 100.00%)  
**Submitted:** 2026-10-18T05:05:11.193Z  

```cpp
class Solution {
private:
    bool canPick(const vector<int>& price, int k, int mid) {
        int count = 1; 
        int last_price = price[0];
        
        for (int i = 1; i < price.size(); ++i) {
            if (price[i] - last_price >= mid) {
                count++;
                last_price = price[i];
                if (count >= k) return true;
            }
        }
        return count >= k;
    }

public:
    int maximumTastiness(vector<int>& price, int k) {
        sort(price.begin(), price.end());
        
        int low = 0;
        int high = price.back() - price[0];
        int ans = 0;
         while (low <= high) {
            int mid = low + (high - low) / 2;
            
            if (canPick(price, k, mid)) {
                ans = mid; 
                low = mid + 1;
            } else {
                high = mid - 1;  
            }
        }
        
        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/maximum-tastiness-of-candy-basket/)