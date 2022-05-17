// https://leetcode.com/problems/guess-number-higher-or-lower/
// 374. Guess Number Higher or Lower


/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        long long low = 1;
        long long high = n;
        while(low<=high){
            long long mid = low + (high-low)/2;
            if(guess(mid)==0) return mid;
            else if(guess(mid)==-1) high = mid-1;
            else if(guess(mid)==1) low = mid+1;
        }
        return -1;
    }
};