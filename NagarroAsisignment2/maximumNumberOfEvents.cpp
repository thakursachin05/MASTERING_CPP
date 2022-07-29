bool cmp(vector<int> &a,vector<int> &b){
    if(a[1]!=b[1]) return a[1]<b[1];
    return a[0]<b[0];
}
class Solution {
public:
    int maxEvents(vector<vector<int>>& events) {
        sort(events.begin(),events.end(),cmp);
   
        
        int mx = 0;
        for(int i=0;i<events.size();i++){
            mx = max(mx,events[i][1]);
        }
        set<int> s;
        for(int i=1;i<=mx;i++){
            s.insert(i);
        }
        int d = 0;
        for(int i=0;i<events.size();i++){
             auto it = s.lower_bound(events[i][0]);
            if(it!=s.end() && *it <= events[i][1]){
                d++;
                s.erase(*it);
                
            }
        }
        return d;
        
    }
};