//https://www.hackerrank.com/challenges/kaprekar-numbers/problem?isFullScreen=true
//HackerRank Problem Modified Kaprekar Numbers


#include <bits/stdc++.h>

using namespace std;


string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'kaprekarNumbers' function below.
 *
 * The function accepts following parameters:
 *  1. INTEGER p
 *  2. INTEGER q
 */

bool isNumberEqual(int n){
    string orginal = to_string(n);
    int d = orginal.size();
    long k = (long)n*n;
    string s = to_string(k);
    string l="",r="";
    for(int i=0;i<s.size();i++){
        if(i<s.size()-d)
            l += s[i];
        else r+=s[i]; 
    }
    // cout<<"start"<<endl;
    // cout<<s<<" "<<l<<" "<<r<<" "<<endl;
    // cout<<"end"<<endl;
    int n1=0,n2=0;
    if(l.size()>0)
        n1 = stoi(l);
    if(r.size()>0) n2=stoi(r);
    return (n1+n2==n);
    
}

void kaprekarNumbers(int p, int q) {
    bool flag = true;
    for(int i=p;i<=q;i++){
        if(isNumberEqual(i)) {
            cout<<i<<" ";
            flag = false;
        }
    }
    if(flag) cout<<"INVALID RANGE"<<endl;
}

int32_t main()
{
    string p_temp;
    getline(cin, p_temp);

    int p = stoi(ltrim(rtrim(p_temp)));

    string q_temp;
    getline(cin, q_temp);

    int q = stoi(ltrim(rtrim(q_temp)));

    kaprekarNumbers(p, q);

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
