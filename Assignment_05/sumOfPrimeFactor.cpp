#include<bits/stdc++.h>
using namespace std;
#define int long long

vector<int> arr(2e6+5,0);

void primeFactor(){
    int n = 2e6;
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
}

int getSumOfPrimeFactors(int n){
    int ans=0;
    int index = n;
    while(index>1 && arr[index]!=index){
        ans+= arr[index];
        index /= arr[index];
    }
     ans+=arr[index];
    
    return ans;
}


signed main() {
    primeFactor();
    
    vector<int>A= {0, 2, 3, 4, 5, 5, 7, 6, 6, 7, 11, 7, 13, 9, 8, 8, 17, 8, 19, 9, 10, 13, 23, 9, 10, 15, 9, 11, 29, 10, 31, 10, 14, 19, 12, 10, 37, 21, 16, 11, 2734, 50010, 511, 111117, 285716, 6412, 90, 999985, 11352, 347, 1999969, 28585, 24703, 38478, 46554, 1559, 80009, 22744, 868, 52652, 1999979, 327, 27470, 1075, 2141, 2573, 1108, 333336, 1733, 21766, 984, 200006, 6133, 675, 1999993, 2080, 1042, 289, 105282, 79, 1745};
    
    int test_pass=0;
    
    for(int i=1;i<=40;i++){
        if(getSumOfPrimeFactors(i)!=A[i-1]){
            cout<<"Wrong Answer  for n:"<<i<<"\n";
            break;
        };
        test_pass++;
    }
    
    int x = 2e6-41;
    for(int i=0;i<=40;i++){
        if(getSumOfPrimeFactors(x+i)!=A[i+40]){
            cout<<"Wrong Answer  for n:"<<x+i<<"\n";
            break;
        };
        test_pass++;
    }
    cout<<"test_Passed: "<<test_pass<<"\n";
    
}