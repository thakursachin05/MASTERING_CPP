// https://leetcode.com/problems/permutations/
// 46. Permutations

class Solution {
    
public:
    vector<vector<int>> output;
    map<int,bool> mp;
    void precal(vector<int> &nums,int start,vector<int> &ans){
        if(ans.size() == nums.size()){
            output.push_back(ans);
        }
        
        for(int i=0;i<nums.size();i++){
            if(!mp[nums[i]]){
                mp[nums[i]]=true;
                ans.push_back(nums[i]);
                precal(nums,start+1,ans);
                ans.pop_back();
                mp[nums[i]]=false;
            }
            
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> ans;
        precal(nums,0,ans);
        return output;
    }
};