class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();
       
        vector<long long> squares(n);
        for (int i = 0; i < n; ++i) {
            squares[i] = (long long)nums[i] * nums[i];
        }
        sort(squares.begin(), squares.end());
        
        long long result = 0;
        if (n % 2 != 0) {
            result += squares[n - 1];
            n--;
        }
        for (int j = 0; j < n / 2; ++j) {
            result += squares[n - 1 - j]; 
            result -= squares[j];  
        }
        
        return result;
    }
};