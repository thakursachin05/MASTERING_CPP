// program to print a geometric progression series 

#include<bits/stdc++.h>
using namespace std;


void gp(int a,int r,int n){
    int term = 0;

    int nextTerm = a;
  while (term <= n)
  {
      
      cout<<nextTerm<<" ";  
      nextTerm *= r;
      term++;
      
      }
  

}

int main(){
    int a,r,n;
    cin>>a>>r>>n;

    gp(a,r,n);
}
