class Solution {
public:
    int commonFactors(int a, int b) {
        vector<int> c;
        vector<int> d;

        for(int i = 1; i <= a; i++) {
            if(a % i == 0) {
                c.push_back(i);
            }
        }

        for(int i = 1; i <= b; i++) {
            if(b % i == 0) {
                d.push_back(i);
            }
        }

        int count = 0;

        for(int i = 0; i < c.size(); i++) {
            for(int j = 0; j < d.size(); j++) {
                if(c[i] == d[j]) {
                    count++;
                }
            }
        }

        return count;
    }
};