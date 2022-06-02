// https://leetcode.com/problems/subsets-ii/
// 90. Subsets II

class Solution {
public:

        void FastIO(){
            ios_base::sync_with_stdio(0);cin.tie(0);}
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        FastIO();
        vector<vector<int>>subset_all;
        set<vector<int>>s;
        
        for(int mask=0; mask< 1<<nums.size(); mask++){
            vector<int>subset;
            for(int i=0; i<nums.size(); i++){
                if(mask&(1<<i))
                    subset.push_back(nums[i]);
            }
            sort(subset.begin(), subset.end());
            s.insert(subset);
            subset.clear();
        }
        
        for(auto it: s){
            subset_all.push_back(it);
        }
        return subset_all;
    
    }
    
};
