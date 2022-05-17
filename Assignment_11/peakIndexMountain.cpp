// https://leetcode.com/problems/peak-index-in-a-mountain-array/submissions/
// 852. Peak Index in a Mountain Array


class Solution {
public:
    // int countSmaller(vector<int> arr,int target){
    //     int count = 0;
    //     for(int i=0;arr[i]!=target;i++){
    //         if(arr[i]<target) count++;
    //     }
    //     return count;
    // }
    int peakIndexInMountainArray(vector<int>& arr) {
        int low = 0;
        int high   = arr.size()-1;
        int ans = 0;
        while(low<=high){
            int mid = (low+high)/2;
            if(arr[mid]>arr[mid+1]){
                ans = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return ans;
    }
};