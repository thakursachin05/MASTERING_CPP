// https://www.hackerrank.com/challenges/plus-minus/problem?isFullScreen=true

// Plus - minus

#include <bits/stdc++.h>

using namespace std;

void plusMinus(vector<int> arr) {
    float pos = 0.0;
    float neg = 0.0;
    for(auto x : arr){
        if(x > 0) pos++;
        else if(x<0) neg++;
    } 
    printf("%f \n",pos/arr.size());
    printf("%f \n",neg/arr.size());
     printf("%f \n",(arr.size() - (pos+neg))/arr.size());
}

int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    plusMinus(arr);
}
