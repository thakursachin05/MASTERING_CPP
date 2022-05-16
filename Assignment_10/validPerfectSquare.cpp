// https://leetcode.com/problems/valid-perfect-square/
// 367. Valid Perfect Square

class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num==1) return true;
        long long low = 0;
        long long high = num;
        while(high-low>1){
            long long mid = low + (high-low)/2;
            if(mid*mid==num) return true;
            else if(mid*mid>num) high = mid;
            else low = mid;
        }
        return false;
    }
};
