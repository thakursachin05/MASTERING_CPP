// https://leetcode.com/problems/binary-search/
// 704. Binary Search

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low=0,mid;
        int high=nums.size()-1;
        
        while(low<=high){
            
            mid=(high+low)/2;
            if(nums[mid]==target){
                return mid;
            }
            if(nums[mid]>target){
                high=mid-1;
                
            }
            else low=mid+1;
        }
        return -1;
        
    }
};
