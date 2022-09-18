// https://leetcode.com/problems/longest-increasing-subsequence/
// 300. Longest Increasing Subsequence

class Solution {
public:
    int f(int curr,int prev,vector<int> &nums,vector<vector<int>> &dp){
        if(curr==nums.size()){
            return 0;
        }
        if(dp[curr][prev+1]!=-1) return dp[curr][prev+1];
        
        if(prev==-1 || nums[curr]>nums[prev]){
            return dp[curr][prev+1] = max(1+f(curr+1,curr,nums,dp),f(curr+1,prev,nums,dp));
        }
        return dp[curr][prev+1] = f(curr+1,prev,nums,dp);
    }
    int lengthOfLIS(vector<int>& nums) {
        vector<vector<int>> dp(nums.size()+3,vector<int>(nums.size()+3,-1));
        return f(0,-1,nums,dp);
    }
};
