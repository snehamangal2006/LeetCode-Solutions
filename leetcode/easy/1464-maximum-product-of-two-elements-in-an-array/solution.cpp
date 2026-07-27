class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maximum=INT_MIN;
        int n=nums.size();
        for(int i=0;i<n-1;i++){
        int product=1;
            for(int j=i+1;j<n;j++){
                product= (nums[i]-1)*(nums[j]-1);
                maximum = max(maximum,product);
            }
        } return maximum;
    }
};