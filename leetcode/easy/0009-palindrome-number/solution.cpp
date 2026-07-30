class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false ;
        }
        long r=0;
        long c=x;
        while (x!=0){
            int d=x%10;
            x=x/10;
            r=r*10;
            r=r+d;
        }
        if(r==c){
            return true ;
        }else{
            return false ;
        }
    }
};