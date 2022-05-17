// https://leetcode.com/problems/sqrtx/
// 69. Sqrt(x)

class Solution {
public:
    int mySqrt(int x) {
        if(x==1) return 1;
        long long low = 0;
        long long high = x;
        long long ans = 0;
        while((high-low)>1){
            long long mid = low + (high-low)/2;
            if(mid*mid == x) return mid;
            else if(mid*mid>x) high = mid;
            else {
                ans = mid;
                low = mid;
            }
        }
        return ans;
    }
};