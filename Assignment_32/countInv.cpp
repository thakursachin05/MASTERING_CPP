#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'countInversions' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

long merge(int s,int mid,int e, vector<int> &arr){
    long count = 0;
    vector<int> temp;
    int i = s;
    int j = mid+1;
    while(i<=mid && j<=e){
        if(arr[i] > arr[j]){
            temp.push_back(arr[j++]);
            count += mid-i+1;
        }
        else{
            temp.push_back(arr[i++]);
        }
    }
    
    while(i<=mid){
        temp.push_back(arr[i++]);
    }
    
    while(j<=e){
        temp.push_back(arr[j++]);
    }
    
    int k = 0;

    for(int t = s;t<=e;t++){
        arr[t] = temp[k++];
    }
    
    return count;
}

long mergeSort(int s,int e,vector<int> &arr){
    long count = 0;
    if(s < e ){
        
        int mid = (s+e)/2;
        count += mergeSort(s,mid,arr);
        count += mergeSort(mid+1,e,arr);
        count += merge(s,mid,e,arr);
    }
    return count;
}
long countInversions(vector<int> arr) {
    int n = arr.size();
    return mergeSort(0,n-1,arr);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string t_temp;
    getline(cin, t_temp);

    int t = stoi(ltrim(rtrim(t_temp)));

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string n_temp;
        getline(cin, n_temp);

        int n = stoi(ltrim(rtrim(n_temp)));

        string arr_temp_temp;
        getline(cin, arr_temp_temp);

        vector<string> arr_temp = split(rtrim(arr_temp_temp));

        vector<int> arr(n);

        for (int i = 0; i < n; i++) {
            int arr_item = stoi(arr_temp[i]);

            arr[i] = arr_item;
        }

        long result = countInversions(arr);

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

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
