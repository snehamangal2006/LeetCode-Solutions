class Solution {
private: 
    bool feasible(const vector<int>& nums, int k, long long maxTime) {
        int number = 1;
        long long currentSum = 0;
        
        for (int num : nums) {
            if (currentSum + num > maxTime) {
                number++;
                currentSum = num;
            } else {
                currentSum += num;
            }
        }

        return number <= k;
    }

public:
    int splitArray(vector<int>& nums, int k) {
        long long low = *std::max_element(nums.begin(), nums.end());
        long long high = std::accumulate(nums.begin(), nums.end(), 0LL);
        long long result = high;

        while (low <= high) {
            long long mid = low + (high - low) / 2;
            if (feasible(nums, k, mid)) {
                result = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        
        return result;
    }
};
    
