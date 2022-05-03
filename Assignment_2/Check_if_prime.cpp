// A program to find whether the number in the given range is prime or not


#include<bits/stdc++.h>
using namespace std;

bool isPrime(int a){
    if(a==1) return 0;
    for(int i=2;i*i<=a;i++){
        if(a%i==0) return 0;
    }
    return 1;
}
int main() {
    int n;
    cin>>n;
    for(int i=1;i<n;i++){
         if (isPrime(i)){
            cout<<"the number "<<i<<" is prime\n";
         }
         else{
            cout<<"the number "<<i<<" is not prime\n";
         }   
    }
}