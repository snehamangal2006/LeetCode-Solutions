class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> arr;
        for(int i=0;i<nums.size();i++){
    arr.push_back(pow(nums[i],2));
        }  sort(arr.begin(),arr.end());
        return arr;
    }
};