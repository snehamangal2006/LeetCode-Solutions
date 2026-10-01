
class Solution {
public:
    vector<int> constructRectangle(int area) {
        int low = 1;
        int high = area; // fixed: 'n' changed to 'area'
        int diff = INT_MAX;
        vector<int> ans = {area, 1}; // default fallback answer

        while (low <= high) {
            long long result = (long long)low * high; // avoid integer overflow

            if (result == area) {
                int minimum = high - low;
                if (minimum < diff) {
                    diff = minimum;
                    ans = {high, low}; // store best [length, width]
                }
                low++;
                high--;
            } else if (result < area) {
                low++;
            } else {
                high--;
            }
        }

        return ans; // fixed: return statement added
    }
};