class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        vector<int> merged;
        merged.reserve(n + m);

        int i = 0, j = 0;
        while (i < n && j < m) {
            if (nums1[i] <= nums2[j]) {
                merged.push_back(nums1[i++]);
            } else {
                merged.push_back(nums2[j++]);
            }
        }
        while (i < n) merged.push_back(nums1[i++]);
        while (j < m) merged.push_back(nums2[j++]);

        int total = n + m;
        int mid = total / 2;

        if (total % 2 == 0) {
            return (merged[mid - 1] + merged[mid]) / 2.0;
        } else {
            return merged[mid];
        }
    }
};