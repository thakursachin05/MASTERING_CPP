// https://leetcode.com/problems/reverse-integer/
//LeetCode Q. No. - 7. Reverse Integer


class Solution {
public:
    int reverse(int x) {
        long long reverseNum = 0;
        while(x!=0){
            int remainder = x%10;
            //checking if reversed number is outside the range of 3bit integer 
            if(reverseNum>INT_MAX/10 || reverseNum==INT_MAX/10 && remainder>7 ) return 0;
            if(reverseNum<INT_MIN/10 || reverseNum==INT_MIN/10 && remainder<-8 ) return 0;
            reverseNum = reverseNum*10 + remainder;

            //We can also check from this condition as well
            //   if(reverseNum>INT_MAX || reverseNum<INT_MIN  ) return 0;
            
            x = x/10;
        }
        return reverseNum;
    }
};