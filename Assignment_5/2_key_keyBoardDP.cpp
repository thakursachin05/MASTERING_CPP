//https://leetcode.com/problems/2-keys-keyboard/
//LeetCode Q.No. - 650. 2 Keys Keyboard

// This time we have implemented the dp approach to the solve this question for improving the time complexity for larger test cases

vector<int> primeFactor;
void primefactors(){
    int n = 1e3+5;
    for(int i=0;i<n;i++){
        primeFactor.push_back(i);
    }
    
    for(int i=2;i<n;i++){
        if(primeFactor[i]==i){
            for(int j = i*i;j<n;j+=i){
                primeFactor[j] = i;
            }
        }
    }
}
vector<int> dp;
void helper(){
        primefactors();
        int n = 1e3+5;
        for(int i=0;i<n;i++){
            dp.push_back(0);
         }
        
        dp[2]=2;
        for(int i=3;i<n+1;i++){
            dp[i] =  primeFactor[i] + dp[i/primeFactor[i]];
        }
    }
class Solution {
public: 
    int minSteps(int n) {
        if(dp.size()==0) helper();
        return dp[n];
    }
};
