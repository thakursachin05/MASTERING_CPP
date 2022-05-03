// https://www.hackerrank.com/challenges/birthday-cake-candles/problem?isFullScreen=true
//Birthday Candles

#include <bits/stdc++.h>

using namespace std;

int birthdayCakeCandles(vector<int> candles) {
   int max = INT_MIN;
    int count=0;
    for(int i=0;i<candles.size();i++){
        if(max<candles[i]){
            max=candles[i];
            count=1;
        }
        else if(max==candles[i]){
            count++;
        }
        
    }
    return count;
}

int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    cout<<birthdayCakeCandles(arr);
}
