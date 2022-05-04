#include<bits/stdc++.h>
using namespace std;

#define long long int
vector<int> arr(1e6,1);

void sieve(){
    arr[0] = 0;
    arr[1] = 0;
    for(int i=2;i*i<1e6;i++){
        if(arr[i]){
            for(int j = i*i;j<1e6;j+=i){
                arr[j] = 0;
            }
        }
    }
}


int32_t main(){
    sieve();
    int count = 0;
    for(int i=1;i<100;i++){
        if(arr[i]==1){
            cout<<i<<" ";
            count++;
        }
    }
    cout<<endl;
    cout<<count;

}