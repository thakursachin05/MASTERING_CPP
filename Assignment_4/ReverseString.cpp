//https://leetcode.com/problems/reverse-string/
//Leetcode Q.No.-344. Reverse String

class Solution {
public:
    void reverseString(vector<char>& s) {
        int start=0;
        int end = s.size()-1;
        while(start<end){
            char temp = s[start];
            s[start] = s[end];
            s[end] = temp;
            start++;
            end--;
        }
        
    }
};

