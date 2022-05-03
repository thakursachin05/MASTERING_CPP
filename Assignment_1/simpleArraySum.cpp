// https://www.hackerrank.com/challenges/simple-array-sum/problem?isFullScreen=true
// Given an array of integers, find the sum of its elements.
// Function Description

// Complete the simpleArraySum function in the editor below. It must return the sum of the array elements as an integer.

// simpleArraySum has the following parameter(s):

// ar: an array of integers

#include <bits/stdc++.h>

using namespace std;

int simpleArraySum(vector<int> ar) {
    int sum = 0;
    for(auto x : ar){
        sum += x;
    }
    return sum;
}

int main()
{
    int n;
    cin>>n;
    vector<int> ar(n);
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    cout<<simpleArraySum(ar);
    
}
