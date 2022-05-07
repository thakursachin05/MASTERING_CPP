//https://leetcode.com/problems/2-keys-keyboard/
//LeetCode Q.No - 650. 2 Keys Keyboard

vector<int> primeFactorSum;

 void primeFactor(){
    int n = 1e3+5;
    //Making the array for prime factors
    vector<int> arr(n+5,0);
      for(long long i=2;i<=n;i++){
        arr[i] = i;
    }

    for(long long i=2;i<=n;i++){
        if(arr[i]==i){
            for(long long j = i*i;j<=n;j+=i){
                if(arr[j]%i==0)
                    arr[j] = i;
            }
        }
    }

    //Filling the sum array of prime factors
    for(long long i=1;i<n;i++){

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

class Solution {
public:
   
    
    int minSteps(int n) {
        if(primeFactorSum.size()==0) primeFactor();
        return primeFactorSum[n-1];
    }
};