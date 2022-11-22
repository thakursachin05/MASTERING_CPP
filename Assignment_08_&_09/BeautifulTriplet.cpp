// https://www.hackerrank.com/challenges/beautiful-triplets/problem?isFullScreen=true
// Beautiful Tripplet

#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'beautifulTriplets' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER d
 *  2. INTEGER_ARRAY arr
 */
int binarySearch(int s,int e,vector<int> arr,int target){
    while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid]==target) return mid;
        else if(arr[mid]>target) e = mid-1;
        else s = mid+1;
    }
    return -1;
}
int beautifulTriplets(int d, vector<int> arr) {
    // int count = 0;
    // int i = 0;
    // int j = i+1;
    // int index = 1;
    // while(j<arr.size()-1){
    //     if(arr[j]-arr[i]<d){
    //         j++;
    //     }
    //     else if(arr[j]-arr[i]>d){
    //         i++;
    //     }
    //     else if(arr[j]-arr[i]==d){
    //         int target = d+arr[j];
    //         if(binarySearch(j+1,arr.size(),arr,target)!=-1){
    //             count++;
    //             cout<<i<<" "<<j<<" "<<binarySearch(j+1,arr.size(),arr,target)<<endl;
    //         }
    //         i = index++;
    //         j = i+1;
    //     }
    //     cout<<i<<" "<<j<<endl;
        
    // }
    // return count;
    int count = 0;
    int n = arr.size();
    for(int i=0;i<n;i++){
        for(int j= i+1;j<n-1;j++){
            
                if(arr[j]-arr[i]==d){
                    int target = arr[j]+d;
                // cout<<"Tsrget"<<target<<endl;
                // cout<<i<<" "<<" "<<j<<endl;
                // cout<<binarySearch(j+1,n,arr,target)<<endl;
                        if(binarySearch(j+1,n,arr,target)!=-1) count++;
                }
               
            }
        }
    
    return count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string first_multiple_input_temp;
    getline(cin, first_multiple_input_temp);

    vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

    int n = stoi(first_multiple_input[0]);

    int d = stoi(first_multiple_input[1]);

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split(rtrim(arr_temp_temp));

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    int result = beautifulTriplets(d, arr);

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



