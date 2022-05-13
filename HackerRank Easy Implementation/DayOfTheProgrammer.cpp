// https://www.hackerrank.com/challenges/day-of-the-programmer/
// Day of the Programmer



#include <bits/stdc++.h>
using namespace std;




int main(){
    int year;
    cin>>year;
    if(year<1918){
        if(year%4==0) cout<<"12.09."<<year;
        else cout<<"13.09."<<year;
        
    }
    else if(year==1918)
    {
        cout<<"26.09."<<year;
    }
    else{
        if(year%400==0){
            cout<<"12.09."<<year;
        }
        else if(year%4==0 && year%100!=0){
            cout<<"12.09."<<year;
        }
        else cout<<"13.09."<<year;
    }
    return 0;
}
