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