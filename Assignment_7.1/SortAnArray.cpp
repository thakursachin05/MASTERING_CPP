//https://leetcode.com/problems/sort-an-array/
// LeetCode Problem Sort An array


class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto x: nums){
            mp[x]++;
        }
        int minNum = INT_MAX;
        int maxNum = INT_MIN;
        for(auto x : nums){
            minNum = min(minNum,x);
            maxNum = max(maxNum,x);
        }
        // cout<<minNum<<" "<<maxNum<<endl;
        int index = 0;
        for(int i = minNum;i<=maxNum;i++){
            while(mp[i]--){
                nums[index++] = i;
            }
        }
        return nums;
    }
};