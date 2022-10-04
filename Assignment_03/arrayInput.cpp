#include<bits/stdc++.h>
using namespace std;


vector<int> takeInput(string s){
    vector<int> arr;
    string T;
    stringstream X(s);
   while (getline(X, T, ',')) {
       arr.push_back(stoi(T));
    }
    return arr;
}

int main(){
    string s;
    cin>>s;
    vector<int> arr = takeInput(s);
    for(auto x : arr){
        cout<<x<<" ";
    }
}