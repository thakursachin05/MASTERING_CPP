#include <bits/stdc++.h>

using namespace std;

int dp[2002][2002];

int f(int i,int  n,int k,vector<int> &arr){
    if(i==n) return 0;
    if(k<=0) return 0;
    if(dp[i][k]!=-1) return dp[i][k];
    if(arr[i]<=k){
        return dp[i][k] =  max(arr[i] + f(i,n,k-arr[i],arr),f(i+1,n,k,arr));
}
    return dp[i][k] = f(i+1,n,k,arr);
    }

int unboundedKnapsack(int k, vector<int> &arr) {
    return f(0,arr.size(),k,arr);
}

int main()
{
    memset(dp,-1,sizeof(dp));
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<unboundedKnapsack(k,arr)<<endl;
        
    }
}
