class Solution {
public:
    void moveZeroes(vector<int>& nums) {
      int n = nums.size();
        int lastNonZeroIndex = 0;

        // Step 1: Move all non-zero elements to the front
        for (int i = 0; i < n; i++) {
            if (nums[i] != 0) {
                nums[lastNonZeroIndex] = nums[i];
                lastNonZeroIndex++;
            }
        }

        // Step 2: Fill the remaining positions with zeroes
        for (int i = lastNonZeroIndex; i < n; i++) {
            nums[i] = 0;
        }
    }
};