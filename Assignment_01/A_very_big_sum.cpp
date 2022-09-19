// https://www.hackerrank.com/challenges/a-very-big-sum/problem?isFullScreen=true
// A very Big Sum

#include <bits/stdc++.h>

using namespace std;

long aVeryBigSum(vector<long> ar) {
    long long sum = 0;
    for(auto x : ar){
        sum += x;
    }
    return sum;
}

int main()
{
    int n;
    cin>>n;
    vector<long> ar(n);
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    cout<<aVeryBigSum(ar);
}