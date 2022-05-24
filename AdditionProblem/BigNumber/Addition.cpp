#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string add(string a, string b){
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());

    int cary = 0;
    int i=0,j=0;
    
    while(i<a.size() && j<b.size()){
        int c1 = a[i] - '0';
        int c2 = b[j] - '0';
        int value = (c1+c2)+cary;
        a[i] = value%10 + '0';
        cary = value/10;
        i++;
        j++;
    }
    
        while(i<a.size()){
            int c1 = a[i] - '0';
            int value = c1+cary;
            a[i]=value%10 + '0';
            cary = value/10;
            i++;
        }
          while(j<b.size()){
            int c1 = b[j] - '0';
            int value = c1+cary;
            a.push_back(value%10 + '0');
            cary = value/10;
            j++;
        }
        if(cary){
            a.push_back(cary+'0');
        }
        // cout<<a<<endl;
        // cout<<cary<<endl;

        reverse(a.begin(),a.end());
        return a;

}

int main(){
    string a,b;
    cin>>a>>b;

    cout<<add(a,b);

}
