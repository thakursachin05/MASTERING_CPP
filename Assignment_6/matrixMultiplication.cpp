#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> multiplication(vector<vector<int>> a, vector<vector<int>> b){
    int s1 = a.size();
    int col1 = a[0].size();
    int col2 = b.size();
    int s2 = b[0].size();
    vector<vector<int>> result;
    if(col1!=col2){
        return {{0}};
    }
    for(int i=0;i<s1;i++){
        vector<int> arr;
        for(int j=0;j<s2;j++){
            int num = 0;
            for(int k=0;k<col1;k++){
                num += a[i][k]*b[k][j];
            }
                arr.push_back(num);
        }
        result.push_back(arr);
    }
    return result;
}


vector<vector<int>> takeInput(int n,int m){
    vector<vector<int>> output;
    for(int i=0;i<n;i++){
        vector<int> arr;
        for(int j=0;j<m;j++){
            int x;
            cin>>x;
            arr.push_back(x);
        }
        output.push_back(arr);
    }
    return output;
}

void print(vector<vector<int>> matrix){
    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[0].size();j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> a = takeInput(n,m);
    int n1,m1;
    cin>>n1>>m1;
    vector<vector<int>> b = takeInput(n1,m1);

    vector<vector<int>> c = multiplication(a,b);
    print(c);
    
}
