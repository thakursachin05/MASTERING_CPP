// https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/
// 1464. Maximum Product of Two Elements in an Array

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        return max({(nums[0]-1)*(nums[1]-1),(nums[n-1]-1)*(nums[n-2]-1)});
    }
};
