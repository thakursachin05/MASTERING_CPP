#include<bits/stdc++.h>
using namespace std;


void printPattern(int n){
    for(int i=0;n>>i!=0;i++){
        for(int j=n>>i;j>0;j--){
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