class Solution {
public:
    vector<vector<int>> aggregateTimeSeries(vector<vector<int>>& series1,
                                            vector<vector<int>>& series2) {

        int n = series1.size();
        int m = series2.size();

        vector<vector<int>> ans;

        int i = 0, j = 0;

        while (i < n || j < m) {

            int t;

            if (i == n)
                t = series2[j][0];
            else if (j == m)
                t = series1[i][0];
            else
                t = min(series1[i][0], series2[j][0]);

            int val1 = 0;
            int val2 = 0;

            // Value from series1
            if (i < n && series1[i][0] == t) {
                val1 = series1[i][1];
                i++;
            } else {
                if (i < n)
                    val1 = series1[i][1];
                else
                    val1 = 0;
            }

            // Value from series2
            if (j < m && series2[j][0] == t) {
                val2 = series2[j][1];
                j++;
            } else {
                if (j < m)
                    val2 = series2[j][1];
                else
                    val2 = 0;
            }

            ans.push_back({t, val1 + val2});
        }

        return ans;
    }
};