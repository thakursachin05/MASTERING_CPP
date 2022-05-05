// https://leetcode.com/problems/add-digits/
//LeetCode Q.No. - 258. Add Digits



class Solution {
public:
    int addDigits(int num) {
        if(num<10){
            return num;
        }
        while(num>=10){
           int sum = 0;
            while(num>0){
                sum += num%10;
                num /= 10;
            }
            num = sum;
        }
     
      return num;
    }
};