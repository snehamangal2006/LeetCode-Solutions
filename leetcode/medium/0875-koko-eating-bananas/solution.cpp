class Solution {
public:
int calculateTotalHours(vector<int>& piles, int speed) {
        int totalH = 0;
        for (int bananas : piles) {
            totalH += (bananas +speed-1 / speed);
        }
        return totalH;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
       int maxPile = *max_element(piles.begin(), piles.end());
        int high = maxPile;
        int ans = maxPile;

        while(low<=high){
            int mid =  (high+low)/2;
             int totalH = calculateTotalHours(piles, mid);
               if(totalH<=h) {
                   ans = mid;
                   high = mid-1;
               } else low=mid+1;
        } return ans;
    }
};