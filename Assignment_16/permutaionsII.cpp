// https://leetcode.com/problems/permutations-ii/
// 47. Permutations II

class Solution {
public:
    vector<vector<int>> output;
    map<int,bool> mp;
    map<vector<int>,bool> vecmp;
    
    void precal(vector<int> &nums,int start,vector<int> &ans){
        if(ans.size() == nums.size()){
            if(!vecmp[ans]){
                output.push_back(ans);
                vecmp[ans] = true;
            }
            return;
        }
        
        for(int i=0;i<nums.size();i++){
                if(!mp[i]){
                    
                mp[i] = true;
                ans.push_back(nums[i]);
                precal(nums,start+1,ans);
                ans.pop_back();
                    mp[i] = false;
                }

            }
            
        }
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<int> ans;
        precal(nums,0,ans);
        return output;
    }
};