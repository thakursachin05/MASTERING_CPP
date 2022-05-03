#include<bits/stdc++.h>
using namespace std;


// filling the array with primeNumbers first
vector<int> fillArrayPrimeNumber(int n){
    vector<int> arr;    
    arr.push_back(2);
    for(int i=3;i<n;i++){
        int flag = 1;
        int j=0;
       while(arr[j]*arr[j]<=i){
           if(i%arr[j]==0){
               flag = 0;
           break;
           } 
           j++;
       }
       if(flag)
       arr.push_back(i);
    }
    return arr;
}

// Taking output the array of primesNumbers from the userInput array
//For Minimizing the time complexity we have created and filled and array primary , then check for prime numbers in input array 
// => Time complexity = O(n) => Space Complexity => O(n);

vector<int> getPrimeNumbersFromGivenArray(vector<int> input,vector<int> primeArr){
    vector<int> arr;    
    for(int i=0;i<input.size();i++){
        int j=0;
         int flag = 1;
        while(primeArr[j]*primeArr[j]<=input[i]){
              if(input[i]%primeArr[j]==0){
                flag = 0;
                break;
             } 
            j++;
       }
       if(flag)
       arr.push_back(input[i]);
    }
    return arr;
}
    

int main(){
   int n;
   cin>>n;
   vector<int> userInput(n);
    vector<int> primeArrfilled = fillArrayPrimeNumber(1e5);
   for(int i=0;i<n;i++){
       cin>>userInput[i];
   }
   vector<int> primeArr = getPrimeNumbersFromGivenArray(userInput,primeArrfilled);
   for(auto x : primeArr){
       cout<<x<<" ";
   }

}