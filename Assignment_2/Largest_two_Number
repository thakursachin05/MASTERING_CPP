// A program to find two largest element in array and  then verify those with test cases.....

#include <bits/stdc++.h>
using namespace std;

int passedTestCase=0; //global variable


/*
function getTwoLargestNumber will take vector as an input and will return vector of two intergers where first integer will be largest number and second number will be second largest number
*/
vector<int>getTwoLargestNumbers(vector<int>&A){
    int max1=INT_MIN, max2=INT_MIN;
    //write your code to find max1 and max2
    for(int i=0;i<A.size();i++){
        if(A[i]>=max1){
            max2 = max1;
            max1 = A[i];
         }
        else {
            if(A[i]>max2){
                max2 = A[i];
            }
        }      
    }
    return {max1,max2};
}

//test function will not return anything as it is declared with "void"
void test(){
    int n=10;
    int k=10;
    
    //declarre an aray of size n and fill that with random number upto k
    vector<int>A(n);
    for(int i=0;i<n;i++){
        A[i]= rand()%k;
    }
    
    vector<int> B= getTwoLargestNumbers(A);
    vector<int> C=A;  //saving A in C so that we can print the array in case of wrong array
    sort(A.begin(),A.end()); //sorting from library in c++
    
    if(A[n-1]!=B[0] or A[n-2]!=B[1]){
        cout<<"Wrong Answer: ";
        for(int i=0;i<n;i++){
            cout<<C[i]<<" ";
        }
        cout<<"\n";
    }
    else {
        passedTestCase++;
    }
}

int main() {
    int t= 100;
    while(t--){
        test();
    }
    cout<<"Test Case Passed: "<<passedTestCase<<"\n";
}