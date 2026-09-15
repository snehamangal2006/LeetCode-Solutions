#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

class Solution {
private:
    // Helper function to calculate sum using integer arithmetic to prevent precision issues
    long long sumByD(const vector<int>& nums, int div) {
        long long sum = 0;
        for (int num : nums) {
            // Equivalent to ceil(num / div) using integer division
            sum += (num + div - 1) / div;
        }
        return sum;
    }

public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1;
        int high = *max_element(nums.begin(), nums.end());
        int ans = high;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            
            if (sumByD(nums, mid) <= threshold) {
                ans = mid;       // Record valid candidate
                high = mid - 1;  // Try finding a smaller valid divisor
            } else {
                low = mid + 1;   // Divisor too small, increase low
            }
        }

        return low; // Alternatively, returning 'ans' works identically
    }
};