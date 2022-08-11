class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> result;
        int n = nums.size();
        for(int i=0;i<n;i++){
            int low = i+1;
            int high = n-1;
            
            while(low<high){
                int sum = nums[i] + nums[low] + nums[high];
                
                if(sum==0){
                    result.push_back({nums[i],nums[low],nums[high]});
                    low++;
                    high--;
                    
                    
                    while(low<high && nums[low]== nums[low-1]) low++;
                    while(low<high && nums[high]==nums[high+1]) high--;
                }
                else if(sum > 0) high--;
                else low++;
            }
            while(i+1<n && nums[i]==nums[i+1]) i++;
        }
        return result;
    }
};