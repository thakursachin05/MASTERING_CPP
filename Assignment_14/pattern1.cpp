#include<bits/stdc++.h>
using namespace std;


void printPattern(int n){
    for(int i=1;i<n+1;i++){
        for(int j=0;j<i;j++){
            cout<<'#';
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    printPattern(n);
}