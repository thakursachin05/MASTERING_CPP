#include<bits/stdc++.h>
using namespace std;


void ap(int a,int d,int n){
    int term = 0;
    int currTerm = a;
  while (term <= n)
  {
      cout<<currTerm<<" ";  
      currTerm+=d;
      term++;
      
      }
  

}

int main(){
    int a,d,n;
    cin>>a>>d>>n;

    ap(a,d,n);
}
