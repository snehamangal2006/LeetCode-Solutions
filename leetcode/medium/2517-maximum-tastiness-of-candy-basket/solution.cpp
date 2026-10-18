class Solution {
private:
    bool canPick(const vector<int>& price, int k, int mid) {
        int count = 1; 
        int last_price = price[0];
        
        for (int i = 1; i < price.size(); ++i) {
            if (price[i] - last_price >= mid) {
                count++;
                last_price = price[i];
                if (count >= k) return true;
            }
        }
        return count >= k;
    }

public:
    int maximumTastiness(vector<int>& price, int k) {
        sort(price.begin(), price.end());
        
        int low = 0;
        int high = price.back() - price[0];
        int ans = 0;
         while (low <= high) {
            int mid = low + (high - low) / 2;
            
            if (canPick(price, k, mid)) {
                ans = mid; 
                low = mid + 1;
            } else {
                high = mid - 1;  
            }
        }
        
        return ans;
    }
};