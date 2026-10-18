class Solution {
public:
    int missingInteger(vector<int>& nums) {
         int prefixSum = nums[0];
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] == nums[i - 1] + 1) {
                prefixSum += nums[i];
            } else {
                break;
            }
        }
        unordered_set<int> seen(nums.begin(), nums.end());
         int x = prefixSum;
        while (seen.count(x)) {
            x++;
        }
        
        return x;
    }
};