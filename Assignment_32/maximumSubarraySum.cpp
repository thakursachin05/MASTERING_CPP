class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = INT_MIN;
        int maxTillNow = 0;
        
        for(int i=0;i<nums.size();i++){
            maxTillNow += nums[i];
            sum = max(sum,maxTillNow);
            if(maxTillNow<0){
                maxTillNow = 0;
            }
           
        }
        return sum;
    }
};