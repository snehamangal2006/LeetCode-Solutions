class Solution {
public:
    int maxValidPairSum(vector<int>& nums, int k) {
        int n = nums.size();
        int maxi = INT_MIN;
        int best = INT_MIN;

        for (int j = k; j < n; j++) {
            // nums[j-k] is newly eligible
            best = max(best, nums[j-k]);

            // Pair it with nums[j]
            maxi = max(maxi, best + nums[j]);
        }

        return maxi;
    }
};