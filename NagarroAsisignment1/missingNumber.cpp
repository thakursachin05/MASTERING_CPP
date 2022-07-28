class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        int actualSum = (n*(n+1))/2;
        for(auto x : nums) sum += x;
        return actualSum - sum;
    }
};