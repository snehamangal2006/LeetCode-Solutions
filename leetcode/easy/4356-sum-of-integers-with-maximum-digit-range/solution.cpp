class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
        int n=nums.size();
        int maximum=INT_MIN;
        int sum=0;
        vector<pair<int, int>> ans;
        for(int i=0;i<n;i++){
        int maxi=INT_MIN;
        int mini=INT_MAX;
             int x = nums[i];  
            while(x!=0)
                {
                    int d = x%10;
                    x=x/10;
                    if(d>maxi) maxi=d;
                    if(d<mini) mini=d;
                }
                    ans.push_back({nums[i],maxi-mini});
            maximum = max(maximum,maxi-mini);
        } for(int i=0;i<n;i++){
        if (ans[i].second == maximum) {
                sum += ans[i].first;
            }
        }
            
        return sum;
    }
};