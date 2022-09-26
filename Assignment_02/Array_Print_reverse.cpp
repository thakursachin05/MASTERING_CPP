// https://www.hackerrank.com/challenges/arrays-introduction/problem?isFullScreen=true
// Intro to Arrays and Print the Array in reverse order




#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// void printReverse(int arr[],int i,int n){
//     if(i==n) return;
//     printReverse(arr,i+1,n);
//     cout<<arr[i]<<" ";
// }

void reverseArr(int *arr,int n){
    inn s = 0;
    int e = n-1;
    while (s<e)
    {
        swap(arr[s],arr[e]);
    }
    

}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reverseArr(arr,n);
     for(auto x : arr){
        cout<<x<<<" ";
    }
    return 0;
}
