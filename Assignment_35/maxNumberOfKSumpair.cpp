class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int count = 0;
        map<int,int> mp;
        for(auto it : nums){
            if(mp.find(k-it)!=mp.end() && mp[k-it]>0){
                count++;
                mp[k-it]--;
            }
            else{
                mp[it]++;
            }
        }
        return count;
    }
};