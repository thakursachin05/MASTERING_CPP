#include<iostream>
using namespace  std;

void merge(int *arr,int n,int left,int mid,int right){
    int *temp = new int[right-left+1];
    int i= left;
    int j = mid+1;
    int index  = 0;
    while(i<=mid && j<=right){
        if(arr[i]>arr[j]){
            temp[index++] = arr[j++];
        }
        else{
            temp[index++] = arr[i++];
        }
    }

    while (i<=mid)
    {
        temp[index++] = arr[i++];
    }
    while(j<=right){
        temp[index++] = arr[j++];
    }
    index = 0;
    for(int i=left;i<=right;i++){
        arr[i] = temp[index++];
    }
    
}


void mergeSort(int *arr,int n,int left,int right){
    if(left>=right) return;
    int mid = (left+right)/2;
    mergeSort(arr,n,left,mid);
    mergeSort(arr,n,mid+1,right);
    merge(arr,n,left,mid,right);
}


int main(){
    int arr[] = {98,2,9887,2,9878,2};
    mergeSort(arr,6,0,5);
    // merge(arr,6,0,1,1);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }

}
