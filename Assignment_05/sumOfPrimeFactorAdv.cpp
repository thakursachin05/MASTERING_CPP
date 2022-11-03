#include<bits/stdc++.h>
using namespace std;
#define int long long

vector<int> primeFactorSum;

void primeFactor(){
    int n = 2e6;
    //Making the array for prime factors
    vector<int> arr(2e6+5,0);
      for(int i=2;i<=n;i++){
        arr[i] = i;
    }

    for(int i=2;i<=n;i++){
        if(arr[i]==i){
            for(int j = i*i;j<=n;j+=i){
                if(arr[j]%i==0)
                    arr[j] = i;
            }
        }
    }

    //Filling the sum array of prime factors
    for(int i=1;i<n;i++){

        int ans=0;
        int index = i;
        while(index>1 && arr[index]!=index){
            ans+= arr[index];
            index /= arr[index];
        }
        ans+=arr[index];
        primeFactorSum.push_back(ans);
    }
}

int getSumOfPrimeFactors(int n){
  return primeFactorSum[n-1];
}


signed main() {
    primeFactor();
    int n;
    cin>>n;
    cout<<getSumOfPrimeFactors(n);
}