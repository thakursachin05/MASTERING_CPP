// https://leetcode.com/problems/find-target-indices-after-sorting-array/
// 2089. Find Target Indices After Sorting Array


class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        // sort(nums.begin(),nums.end());
        int smallElement = 0;
        int count = 0;
        vector<int> result;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target) count++;
            else if(nums[i]<target) smallElement++;
        }
        // sort(result.begin(),result.end());
        while(count--){
            result.push_back(smallElement++);
        }
        return result;
    }
};
