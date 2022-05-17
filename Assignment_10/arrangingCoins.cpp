// https://leetcode.com/problems/arranging-coins/
// 441. Arranging Coins

class Solution {
public:
    int arrangeCoins(int n) {
        long long low = 0;
        long long high = n;
        long long sum = 2*high;
        long long ans = 0;
        while(low<=high){
            long long mid = low +(high-low)/2;
            if((mid)*(mid+1)==sum) return mid;
            else if(mid*(mid+1)>sum) high = mid-1;
            else{
                ans = mid;
                low = mid+1;
            }
        }
        return ans;
    }
};