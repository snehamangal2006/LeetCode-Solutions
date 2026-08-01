class Solution {
public:
    int largestInteger(int n, int sum) {

        if (sum > 9 * n)
            return -1;

     else  if (sum == 0) {
           
                return 0;
        }

        string ans = "";

        while (n > 0) {
            if (sum >= 9) {
                ans += '9';
                sum -= 9;
            } else {
                ans += char(sum + '0');
                sum = 0;
            }
            n--;
        }   

        return stoi(ans);
    }
};