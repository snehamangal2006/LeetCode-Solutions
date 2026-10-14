class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int n = nums.size();
        int totalSum = 0;
       
        for (int i = 0; i < n; ++i) {
            int index = i + 1;
            if (n % index == 0) {
                totalSum += nums[i] * nums[i];
            }
        }
        
        return totalSum;
    }
};