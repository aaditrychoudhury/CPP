class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)return false;
        int copy = x;
        long int rev=0;
        while(x!=0){
            int n = x%10;
            rev=rev*10+n;
            x=x/10;
        }
        if(rev == copy)return true;
        else return false;
    }
};
