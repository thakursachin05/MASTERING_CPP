// https://leetcode.com/problems/single-element-in-a-sorted-array/
// 540. Single Element in a Sorted Array


class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
        int n = arr.size();
        if(n==1) return arr[0];
        int low = 0;
        int high = n-1;
        while(low<=high){
            int mid = (low+high)/2;

            if((mid==0 && arr[mid]!=arr[mid+1]) || 
               (mid==n-1 && arr[mid]!=arr[mid-1]) || 
               (arr[mid]!=arr[mid-1] && arr[mid]!=arr[mid+1])) return arr[mid];

            if(mid%2==0){
                if(arr[mid]==arr[mid-1] ) high = mid-1;
                else low = mid+1;
            }
            else{
                if(arr[mid]==arr[mid+1]) high = mid-1;
                else low = mid+1;
            }
            
        }
        return -1;
    }
};
