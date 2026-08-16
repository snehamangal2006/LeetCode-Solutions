class Solution {
public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {
        int minimum = INT_MAX;
        int answer = -1;

        for (int i = 0; i < drones.size(); i++) {
            int distance = abs(drones[i][0] - target[0]) +
                           abs(drones[i][1] - target[1]);

            if (distance <= drones[i][2] && distance < minimum) {
                minimum = distance;
                answer = i;
            }
        }

        return answer;
    }
};