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