// https://leetcode.com/problems/decode-ways/
// 91. Decode Ways

class Solution {
public:
    int f(int i,string &s,vector<int> &dp){
        if(i==s.size()){
            return 1;
        }
        if(dp[i]!=-1) return dp[i];
        int ans = 0;
        if(s[i] != '0'){
            ans = f(i+1,s,dp);
        }
        if(i<s.size()-1 && (s[i]=='1' || (s[i]=='2' and s[i+1] <='6'))){
            ans += f(i+2,s,dp);                                                                
        }
        return dp[i] = ans;
    }
    int numDecodings(string s) {
        vector<int> dp(s.size()+1,-1);
        return f(0,s,dp);
    }
};
