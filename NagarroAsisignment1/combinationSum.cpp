LeetCode Combination Sum : 

class Solution {
public:
    void f(int i,int target,vector<int> &ans,vector<vector<int>> &res,vector<int> &arr){
        if(i==arr.size()){
            if(target==0){
                res.push_back(ans);
                return ;
            }
            return;
        }
        
        if(target >= arr[i]){
            ans.push_back(arr[i]);
            f(i,target-arr[i],ans,res,arr);
            ans.pop_back();
        }
        
        f(i+1,target,ans,res,arr);
    }
    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        sort(arr.begin(),arr.end());
        vector<int> ans;
        vector<vector<int>> res;
        
        f(0,target,ans,res,arr);
        return res;
    }
};
