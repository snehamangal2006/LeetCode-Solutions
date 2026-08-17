class Solution {
public:
    int captureForts(vector<int>& forts) {
        int ans = 0;
        int count = 0;
        int previous = 0;

        for (int x : forts) {
            if (x == 0) {
                count++;
            } 
            else {
                if (previous != 0 && previous != x) {
                    ans = max(ans, count);
                }

                previous = x;
                count = 0;
            }
        }

        return ans;
    }
};