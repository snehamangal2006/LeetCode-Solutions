class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> arr1;
        vector<int> arr2;
        int n = nums.size();
        arr1.push_back(nums[0]);
        arr2.push_back(nums[1]);

        for (int k = 2; k < n; k++) {

                if (arr1.back() > arr2.back()) {
                    arr1.push_back(nums[k]);
                }
                else {
                    arr2.push_back(nums[k]);
                }
        }

        
        for (int x : arr2) {
            arr1.push_back(x);
        }

        return arr1;
    }
};