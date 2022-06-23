#include<bits/stdc++.h>
using namespace std;

bool isTargetPresent(vector<int>A, int target){
    //returns true if target is present in A else
    for(int i=0;i<A.size();i++){
        if(A[i]==target) return true;
    }
    return false;
}

bool isTargetPresentIn2DVector(vector<vector<int> >A, int target){
    //returns true if target is present in A
    for(auto it : A){
        for(auto x : it) if(x==target) return true;
    }
    return false;
}
bool isTragetPresentInRow(vector<vector<int> >A, int target, int r){
    //returns true if target is present in row r of A then returns true else return false;
    for(int j=0;j<A[0].size();j++){
        if(A[r][j]==target) return true;
    }
    return false;
}

bool isTragetPresentInCol(vector<vector<int> >A, int target, int c){
    //returns true if target is present in column c of A then returns true else return false;
    for(int i=0;i<A.size();i++){
        if(A[i][c]==target) return true;
    }
    return false;
}


int main() {
    
}