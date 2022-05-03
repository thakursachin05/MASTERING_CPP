// https://www.hackerrank.com/challenges/arrays-introduction/problem?isFullScreen=true
// Intro to Arrays and Print the Array in reverse order




#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void printReverse(int arr[],int i,int n){
    if(i==n) return;
    printReverse(arr,i+1,n);
    cout<<arr[i]<<" ";
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    printReverse(a,0,n);
    return 0;
}
