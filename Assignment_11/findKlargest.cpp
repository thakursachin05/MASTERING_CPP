// https://leetcode.com/problems/kth-largest-element-in-an-array/
// 215. Kth Largest Element in an Array


class Solution {
public:
    int countA(vector<int> &nums,int target){
        int count = 0;
        for(auto x : nums){
            if(x>=target) count++;
        }
        return count;
    }
    
    int findKthLargest(vector<int>& nums, int k) {
        int low = -1e4;
        int high = 1e4;
        int ans = 0;
        while(low<=high){
            int mid = (high+low)/2;
            // cout<<low<<" "<<mid<<" "<<high<<" "<<endl;
            if(countA(nums,mid)<k) high = mid-1;
            else{
                ans = mid;
                low = mid+1;
            }
            
        }
        return ans;
    }
    
};