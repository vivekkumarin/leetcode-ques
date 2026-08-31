class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        int dup=x;
        long long rev=0;
        while(x!=0){
            int rem=x%10;
            rev=rev*10+rem;
            x=x/10;
        }
       // if(rev<INT_MIN || rev>INT_MAX) retrun false;
        if(rev==dup) return true;
        else return false;
        
    }
};