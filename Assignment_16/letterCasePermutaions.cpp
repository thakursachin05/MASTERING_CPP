// https://leetcode.com/problems/letter-case-permutation/
// 784. Letter Case Permutation

class Solution {
public:
    vector<string> result;
    void precal(int start,string &s,string &ans){
        if(ans.size()==s.size()){
            result.push_back(ans);
            return;
        }
        
        ans.push_back(s[start]);
        precal(start+1,s,ans);
        ans.pop_back();
        if(s[start] >= 'a' && s[start]<='z'){
            ans.push_back(s[start]-32);
            precal(start+1,s,ans);
            ans.pop_back();
            
        }
        else if(s[start]>='A' && s[start]<='Z'){
            ans.push_back(s[start]+32);
            precal(start+1,s,ans);
            ans.pop_back();
        }
    }
    vector<string> letterCasePermutation(string s) {
        string ans = "";
        precal(0,s,ans);
        return result;
    }
};