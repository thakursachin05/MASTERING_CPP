// https://leetcode.com/problems/count-good-meals/

class Solution {
public:
    int countPairs(vector<int>& d) {
        int count = 0;
        unordered_map<int,int> mp;
        int mod = 1000000007;
        for(int i=0;i<d.size();i++){
            int ele = d[i];
            int k = 22;
            long pow2 = 1;
            while(k--){
                if(mp[pow2-ele]){
                    count = (count%mod + mp[pow2-ele]%mod)%mod;
                }
                // cout<<pow2<<" ";
                pow2 = pow2<<1;
            }
            // cout<<endl;
            mp[ele]++;
        }
        return count;
    }
};