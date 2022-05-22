// https://leetcode.com/problems/search-insert-position/
//LeetCode Problem No.:- 35. Search Insert Position

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size()-1;
        int ans = nums.size();
        while(low<=high){
            int mid = (low+high)/2;
            
            if(nums[mid]==target) return mid;
            else if(nums[mid]<target) low = mid+1;
            else{
                high = mid-1;
                ans = mid;
            }
        }
        return ans;
    }
};
