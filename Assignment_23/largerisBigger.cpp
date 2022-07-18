// https://www.hackerrank.com/challenges/bigger-is-greater/problem?isFullScreen=true


#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'biggerIsGreater' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING w as parameter.
 */

string biggerIsGreater(string w) {
    string a = w;
    int n = w.size();
    int i=0,j=0;
    
    for(i=n-2;i>=0;i--){
        if(w[i]<w[i+1]){
            break;
        }
    }
    if(i==-1){
        reverse(w.begin(),w.end());
        return "no answer";
    }
    
    for(j=n-1;j>i;j--){
        if(w[j]>w[i]){
            break;
        }
    }
    swap(w[i],w[j]);
    reverse(w.begin()+i+1,w.end());
    return w;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string T_temp;
    getline(cin, T_temp);

    int T = stoi(ltrim(rtrim(T_temp)));

    for (int T_itr = 0; T_itr < T; T_itr++) {
        string w;
        getline(cin, w);

        string result = biggerIsGreater(w);

        fout << result << "\n";
    }

    fout.close();

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
