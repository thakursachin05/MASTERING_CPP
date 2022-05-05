#include<bits/stdc++.h>
using namespace std;


void reverseArr(int *arr,int n){
    inn s = 0;
    int e = n-1;
    while (s<e)
    {
        swap(arr[s],arr[e]);
    }
    

}

void reverseStr(string &s){
    inn s = 0;
    int e = s.size()-1;
    while (s<e)
    {
        swap(s[s],s[e]);
    }
    

}

int main(){
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
    string s;
    cin>>s;
    reverseStr(s);
    cout<<s<<endl;

}