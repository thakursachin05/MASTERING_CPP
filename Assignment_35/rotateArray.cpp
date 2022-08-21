// https://leetcode.com/problems/rotate-array/
// 189. Rotate Array

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k%nums.size();
        int idx1 = nums.size()-k;
        reverse(nums.begin(),nums.begin()+idx1);
        reverse(nums.begin()+idx1,nums.end());
        reverse(nums.begin(),nums.end());
    }
};
