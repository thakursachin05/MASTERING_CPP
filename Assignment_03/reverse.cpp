#include<bits/stdc++.h>
using namespace std;


int sum(int n){
    int sum = 0;
    while(n>0){
        sum+=n%10;
        n /= 10;
    }
  return sum;  
}

int reverse(int  n){
    int rev = 0;
    while(n>0){
        int rem = n%10;
        rev = rev*10 + rem;
        n = n/10;
    }
    return rev;
}

int main(){
    int n;
    cin>>n;

    cout<<sum(n)<<" "<<reverse(n);
}