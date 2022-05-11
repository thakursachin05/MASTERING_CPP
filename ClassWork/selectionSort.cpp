#include<iostream>
using namespace std;

int minIndex(int *arr,int index,int n){
    int min = arr[index];
    int minIndex = index;
    for(int i = index;i<n;i++){
        if(arr[i]<min){
            min = arr[i];
            minIndex = i;
        }
    }
    return minIndex;
}

void SelectionSort(int *arr,int n){
    for(int i=0;i<n;i++){
        int index  = minIndex(arr,i,n);
        int temp = arr[i];
        arr[i] = arr[index];
        arr[index] = temp;
    }
}

int main(){
    int arr[] = {21,2,3,1,2};
    SelectionSort(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}
