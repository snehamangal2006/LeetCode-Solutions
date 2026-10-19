class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int j = 1;
        
        for (int i = 0; i < nums.size(); i++) {

            if (nums[i] <= 0 || (i > 0 && nums[i] == nums[i - 1])) {
                continue;
            }
            
            if (nums[i] == j) {
                j++;
            } else if (nums[i] > j) {
                break;
            }
        }
        
        return j;
    }
};