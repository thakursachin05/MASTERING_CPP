// https://leetcode.com/problems/coin-change/
// 322. Coin Change

class Solution {
public:
    int f(int i,int amount,vector<int> &coins,vector<vector<int>> &dp){
        if(i==coins.size()){
            return INT_MAX-1;
        }
        if(amount == 0){
            return 0;
        }
        if(amount < 0) return INT_MAX-1;
        if(dp[i][amount]!=-1) return dp[i][amount];
        
        return dp[i][amount] = min(1+f(i,amount-coins[i],coins,dp),f(i+1,amount,coins,dp));
    }
    int coinChange(vector<int>& coins, int amount) {
        vector<vector<int>> dp(coins.size()+1,vector<int>(amount+1,-1));
        int ans = f(0,amount,coins,dp);
        if(ans == INT_MAX-1) return -1;
        return ans;
    }
};
