class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0;
        int product=1;
        int c=n;
        while(n>0){
            int d = n%10;
            sum+=d;
            product*=d;
            n=n/10;
        } int sum2 = sum+product; 
        if(c%sum2==0  ) return true;
        return false;
    }
};