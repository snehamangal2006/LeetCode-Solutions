class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if (sum > 9LL * num) return "";
        
        string result = "";
       
        while (sum >= 9 && result.length() < num - 1) {
            result += '9';
            sum -= 9;
        }

        result += to_string(sum);
        
       
        while (result.length() < num) {
            result += '0';
        }
        if (result.length() > num) return "";
        
        return result;
    }
};