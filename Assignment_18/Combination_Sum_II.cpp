// https://leetcode.com/problems/combination-sum-ii/
// 40. Combination Sum II

class Solution {
public:
    void helper(vector<int> &A,int target,int i,vector<vector<int>> &ans,vector<int> &ds){
       
        if(target==0){
            ans.push_back(ds);
            return;
        }
        
            for(int st = i;st<A.size();st++){
                if(st > i && A[st] == A[st-1]) continue;
                if(A[st]>target) break;
                    ds.push_back(A[st]);
                    helper(A,target-A[st],st+1,ans,ds);
                     ds.pop_back();
                }
                // helper(A,target,i+1,ans,ds);
        
            // }
          
            // ds.push_back(A[i]);
            // helper(A,target,i+1,ans,ds);
            // ds.pop_back();
        
        // helper(A,target,i+1,ans,ds);
        
        
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
         vector<vector<int>> ans;
        vector<int> ds;
        sort(candidates.begin(),candidates.end());
        helper(candidates,target,0,ans,ds);
        return ans;
    }
};
