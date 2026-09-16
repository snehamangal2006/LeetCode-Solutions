#include <vector>
#include <numeric>
#include <algorithm>

class Solution {
public:
    int no_of_days(const std::vector<int>& weights, int capacity) {
        int days = 1;
        int currentload = 0;
        for (int w : weights) {
            if (currentload + w > capacity) {
                days++;
                currentload = w;
            } else {
                currentload += w;
            }
        }
        return days;
    }

    int shipWithinDays(std::vector<int>& weights, int days) {
        int left = *std::max_element(weights.begin(), weights.end());
        int right = std::accumulate(weights.begin(), weights.end(), 0);

        while (left < right) {
            int mid = left + (right - left) / 2;
            int required = no_of_days(weights, mid);

            if (required <= days) {
                right = mid; 
            } else {
                left = mid + 1; 
            }
        }

        return left;
    }
};