// https://www.hackerrank.com/challenges/c-tutorial-strings/problem?isFullScreen=true
//String length, concatination, swapping is to be performed


#include <iostream>
#include <string>
using namespace std;

void swap(char *a, char *b){
    char c = *a;
    *a = *b;
    *b = *a;
}

void printOutput(string a,string b){
    cout<<a.size()<<" "<<b.size()<<endl;
    cout<<a+b<<endl;
    swap(a[0],b[0]);
    cout<<a<<" "<<b<<endl;
}
int main() {
	// Complete the program
    string a,b;
    cin>>a>>b;
    printOutput(a,b);
    return 0;
}