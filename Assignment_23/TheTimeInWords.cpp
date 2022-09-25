// https://www.hackerrank.com/challenges/the-time-in-words/problem?isFullScreen=true
// The Time in Words

#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'timeInWords' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. INTEGER h
 *  2. INTEGER m
 */
string oneDigit(int m){
    if(m==1) return "one";
    if(m==2) return "two";
    if(m==3) return "three";
    if(m==4) return "four";
    if(m==5) return "five";
    if(m==6) return "six";
    if(m==7) return "seven";
    if(m==8) return "eight";
    if(m==9) return "nine";
    if(m==10) return "ten";
    if(m==11) return "eleven";
    if(m==12) return "twelve";
    if(m==13) return "thirteen";
    if(m==14) return "fourteen";
    if(m==15) return "quarter";
    if(m==16) return "sixteen";
    if(m==17) return "seventeen";
    if(m==18) return "eighteen";
    if(m==19) return "nineteen";
    if(m==20) return "twenty";
    if(m==21) return "twenty one";
    if(m==22) return "twenty two";
    if(m==23) return "twenty three";
    if(m==24) return "twenty four";
    if(m==25) return "twenty five";
    if(m==26) return "twenty six";
    if(m==27) return "twenty seven";
    if(m==28) return "twenty eight";
    if(m==29) return "twenty nine";
    return "half";
}


string timeInWords(int h, int m) {
    if(m==0)
    {
        return oneDigit(h) + " o' clock";
    }
    else if(m<=30){
        if(m<2)
            return oneDigit(m) + " minute past " + oneDigit(h);
        else if(m==15 || m==30) return oneDigit(m) + " past " + oneDigit(h);
        else return oneDigit(m) + " minutes past " + oneDigit(h);
    }
    else{
        m = 60-m;
        if(m<2)
             return oneDigit(m) + " minute to " + oneDigit(h+1);
        else if(m==15 || m==30){
             return oneDigit(m) + " to " + oneDigit(h+1);
        }
        else return oneDigit(m) + " minutes to " + oneDigit(h+1);

    }

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string h_temp;
    getline(cin, h_temp);

    int h = stoi(ltrim(rtrim(h_temp)));

    string m_temp;
    getline(cin, m_temp);

    int m = stoi(ltrim(rtrim(m_temp)));

    string result = timeInWords(h, m);

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

