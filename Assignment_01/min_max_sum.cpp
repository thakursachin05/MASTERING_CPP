// https://www.hackerrank.com/challenges/mini-max-sum/problem?isFullScreen=true

// MIN - MAX SUM

#include <bits/stdc++.h>

using namespace std;

void miniMaxSum(vector<int> arr) {
    long long sum = 0;
    long long minSum = 0,maxSum = 0;
    int minEle = INT_MAX;
    int maxEle = INT_MIN;
    for(int i=0;i<arr.size();i++){
       sum += arr[i];
       minEle = min(minEle,arr[i]);
       maxEle = max(maxEle,arr[i]);
    }
    minSum = sum - maxEle;
    maxSum = sum - minEle;
    cout<<minSum<<" "<<maxSum;
}

int main()
{

    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    miniMaxSum(arr);
}
