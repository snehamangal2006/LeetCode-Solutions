#include <vector>
#include <algorithm>

using namespace std;

class Solution {
private:
    // Helper function to check if we can form 'm' bouquets on 'day'
    bool canMakeBouquets(const vector<int>& bloomDay, int m, int k, int day) {
        int count = 0;
        int bouquets = 0;

        for (int bloom : bloomDay) {
            if (bloom <= day) {
                count++;
                if (count == k) {
                    bouquets++;
                    count = 0; // Reset count for the next bouquet
                }
            } else {
                count = 0; // Break sequence of adjacent bloomed flowers
            }
        }

        return bouquets >= m;
    }

public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        // Prevent overflow during multiplication using long long
        if ((long long)m * k > bloomDay.size()) {
            return -1;
        }

        int low = *min_element(bloomDay.begin(), bloomDay.end());
        int high = *max_element(bloomDay.begin(), bloomDay.end());
        int ans = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (canMakeBouquets(bloomDay, m, k, mid)) {
                ans = mid;       // Try to find a smaller valid day
                high = mid - 1;
            } else {
                low = mid + 1;   // Need more days for flowers to bloom
            }
        }

        return ans;
    }
};