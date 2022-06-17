// https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
// 34. Find First and Last Position of Element in Sorted Array

class Solution {
public:
    int fO(int s,int e,vector<int> &nums,int target){
        int minIndex = -1;
        while(s<=e){
            int mid = (s+e)/2;
            if(nums[mid]==target){
                minIndex = mid;
              
                    e = mid-1;
             
            }
            else if(nums[mid]>target) e = mid-1;
            else s = mid+1;
          
        }
        return minIndex;
    }
     int LO(int s,int e,vector<int> &nums,int target){
        int maxIndex = -1;
        while(s<=e){
            int mid = (s+e)/2;
            if(nums[mid]==target){
                maxIndex = mid;
               
                    s = mid+1;
                
        
            }
            else if(nums[mid]>target) e = mid-1;
            else s = mid+1;
          
        }
        return maxIndex;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        
        int n = nums.size();
        return {fO(0,n-1,nums,target),LO(0,n-1,nums,target)};
    }
};