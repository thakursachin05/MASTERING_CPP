// https://www.hackerrank.com/challenges/drawing-book/
// Drawing Book


#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'pageCount' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER p
 */

int pageCount(int n, int p) {
   
    int count1=(p)/2;
    int count2=(n-p)/2;
    
     if(n%2==0 & p%2!=0){
         count2++;
     }
    
    // while(start<p){
    //     start+=2;
    //     if(start==p || start==p+1){
    //         count1++;
    //     }
        
    // }
    // while(end>p){
    //     end-=2;
    //     if(end==p || end+1==p){
    //         count2++;
    //     }
    // }
    return min(count1,count2);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string p_temp;
    getline(cin, p_temp);

    int p = stoi(ltrim(rtrim(p_temp)));

    int result = pageCount(n, p);

    fout << result << "\n";

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
