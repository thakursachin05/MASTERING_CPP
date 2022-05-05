#include<bits/stdc++.h>
using namespace std;


void ap(int a,int d,int n){
    int term = 0;
    int i = 0;
  while (term <= n)
  {
      cout<<a + i*d<<" ";  
      i++;
      term++;
      
      }
  

}

int main(){
    int a,d,n;
    cin>>a>>d>>n;

    ap(a,d,n);
}