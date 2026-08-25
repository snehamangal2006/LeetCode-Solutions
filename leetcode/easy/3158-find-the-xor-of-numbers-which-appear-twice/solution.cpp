class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        int n=nums.size();
        int freq[1001] = {0};
        for(int x: nums){
            freq[x]++;
        } int count=0;
         for(int i=0;i<1001;i++){
            if(freq[i]==2){
                count^=i;
            }
        } return count;
    }
};