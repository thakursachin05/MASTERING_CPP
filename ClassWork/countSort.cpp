#include<iostream>
#include<map>
using namespace std;

void countSort(int *arr,int n){
    map<int,int> mp;
    int max = arr[0];
    int min = arr[0];
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
        if(max<arr[i]){
            max = arr[i];
        }
        if(min>arr[i]){
            min = arr[i];
        }
    }
    int index = 0;
    for(int i=min;i<=max;i++){
        while(mp[i]--){
            arr[index++] = i;
        }
    }
}


int main(){
    int arr[] = {2,2,2,1,1,1,3,3,4,4,3,1,1};
    countSort(arr,13);
    for(int i=0;i<13;i++){
        cout<<arr[i]<<" ";
    }
}
