// https://leetcode.com/problems/split-array-largest-sum/
// 410. Split Array Largest Sum


class Solution {
public:
//   bool isPossible(vector<int> &nums,long long sum,int m){
//         int i=0;
//         int partition = 0;
//         long long currSum = 0;
//         for(int i=0;i<nums.size();){
//             if(sum<nums[i]) return false;
//             currSum += nums[i++];
//             if(currSum>sum ){
//                 partition++;
//                 i--;
//                 currSum = 0;
//             }
//         }
//         cout<<partition<<" "<<currSum<<endl;
//         if(partition==m) return true;
//       return false;
        
// }
    
    int splitArray(vector<int>& nums, int m) {
        int sum = 0;
        int low = 0;
        for(int i=0;i<nums.size();i++){
            low = max(low,nums[i]);
            sum+=nums[i];
        }
        
        long long high = sum;
        long long ans = 0;
        while(low<=high){
            long long mid = (low+high)/2;
            int currSum = 0;
            int count = 0;
            for(int i=0;i<nums.size();i++){
                if(currSum+nums[i]<=mid){
                    currSum += nums[i];

                }
                else{
                    currSum = nums[i];
                    count++;
                }
            }
            count++;
            // cout<<count<<" "<<mid<<endl;
            if(count<=m){
                ans = mid;
                high = mid-1;
            }
            else {
                // cout<<"helo"<<endl;
                // ans = mid;
                low = mid+1;
            }
        }
        return ans;
    }
};
