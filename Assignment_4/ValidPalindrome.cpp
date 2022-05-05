// https://leetcode.com/problems/valid-palindrome/
// Leetcode Q. No. - 125. Valid Palindrome



class Solution {
public:
    bool isPalindrome(string s) {
        string temp;
        for(int i=0;i<s.size();i++){
            if(s[i]>='A' && s[i] <= 'Z'){
                temp += s[i] + 32;
            }
            else if(s[i]>='0' && s[i]<='9'){
                temp += s[i];
            }
            else if(s[i]>='a' && s[i]<='z'){
                temp += s[i];
            }
            
        }
        
        int start = 0;
        int end = temp.size()-1;
        while(start<=end){
            if(temp[start]!=temp[end]) return false;
                
            start++;
            end--;
        }
        return true;
    }
};