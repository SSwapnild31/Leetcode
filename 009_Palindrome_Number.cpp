class Solution {
public:
    bool isPalindrome(int x) 
    {
        int num = x;
        long int rev = 0;

        if(num==0){
            return true;
        }
        if(num<0){
            return false;
        }

        while(num>0){
            int r = num%10;
            rev = rev * 10 + r;
            num = num / 10;
        }
        if(rev==x){
            return true;
        }
        return false;
    }
};
