// https://www.hackerrank.com/challenges/encryption/problem?isFullScreen=true

#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'encryption' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string encryption(string s) {
    vector<string> v;
    int n = s.size();
    int r = sqrt(n);
    int c =  ceil(sqrt(n));
    if(r*c < n){
        r++;
    }
    int k = 0;
    for(int i=0;i<r;i++){
        string res;
        for(int j=0;j<c;j++){
            if(k<n)
                res.push_back(s[k++]);
            else res.push_back('*');
        }
        v.push_back(res);
    }
    
    string ans;
    for(int j=0;j<c;j++){
       
        for(int i=0;i<r;i++){
                if(v[i][j]!='*')
                ans.push_back(v[i][j]);
             
                
        }
        ans.push_back(' ');
    }
    
    return ans;
    
    
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = encryption(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
