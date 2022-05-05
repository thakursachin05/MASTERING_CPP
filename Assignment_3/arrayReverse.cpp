#include<bits/stdc++.h>
using namespace std;


void reverseArr(int *arr,int n){
    int s = 0;
    int e = n-1;
    while (s<e)
    {
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
    

}

void reverseStr(string &str){
    int s = 0;
    int e = str.size()-1;
    while (s<e)
    {
        swap(str[s],str[e]);
        s++;
        e--;
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
        cout<<x<<" ";
    }
    string s;
    cin>>s;
    reverseStr(s);
    cout<<s<<endl;

}
