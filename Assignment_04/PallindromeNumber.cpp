//https://leetcode.com/problems/palindrome-number/
//LeetCode Q.No.-9. Palindrome Number



class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        int num = x;
        int rev = 0;
        while(x>0){
            int remainder = x%10;
            //To check whether our number has not increased the value of int, if it does, then return false 
            if(rev>INT_MAX/10 || rev==INT_MAX/10 && remainder>7) return false;
            //Not required at all because at time of negative number we already returned false
            // if(rev<INT_MIN/10 || rev==INT_MIN/10 && remainder<-8) return false;
            rev = rev*10 + remainder;
            x /= 10;
        }
        return (num==rev);
    }
};