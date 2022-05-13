// https://leetcode.com/problems/trapping-rain-water/
// LeetCode Problem 42. Trapping Rain Water

class Solution {
public:
    int trap(vector<int>& height) {
           int n = height.size();
            vector<int> prefix(n);
            vector<int> suffix(n);
            int maxNum = INT_MIN;
            for(int i=0;i<n;i++){
                if(height[i]>maxNum){
                    maxNum = height[i];
                }
                prefix[i] = maxNum;
            }
            maxNum = INT_MIN;
            for(int i=n-1;i>=0;i--){
                  if(height[i]>maxNum){
                    maxNum = height[i];
                }
                suffix[i] = maxNum;
            }
        
        
            int waterStored = 0;
            for(int i=0;i<n;i++){
                waterStored += min(prefix[i],suffix[i])-height[i];
                // cout<<waterStored<<" ";
            }
        // cout<<endl;
        
        // for(int i=0;i<n;i++){
        //     cout<<prefix[i]<<" ";
        // }
        // cout<<endl;
        //   for(int i=0;i<n;i++){
        //     cout<<suffix[i]<<" ";
        // }
        return waterStored;
    }
    
};