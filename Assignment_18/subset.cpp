// https://leetcode.com/problems/subsets/
// 78. Subsets

class Solution {
public:
    void subset(vector<int> &ans,vector<vector<int>> &res,int st,vector<int> &nums){
        if(st>=nums.size()){
            res.push_back(ans);
            return;
        }
        
        subset(ans,res,st+1,nums);
        ans.push_back(nums[st]);
        subset(ans,res,st+1,nums);
        ans.pop_back();
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> ans;
        subset(ans,res,0,nums);
        return res;
    }
};
