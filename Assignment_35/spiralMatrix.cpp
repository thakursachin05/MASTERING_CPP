class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        vector<int> ans;
        int top = 0;
        int bottom = mat.size()-1;
        int left = 0;
        int right = mat[0].size()-1;
        
        while(left<=right && top<=bottom){
            for(int i=left;i<=right && top<=bottom;i++){
                ans.push_back(mat[top][i]);
            }
            top++;
            for(int i=top;i<=bottom && left<=right;i++){
                ans.push_back(mat[i][right]);
            }
            right--;
            for(int i=right;i>=left && top<=bottom;i--){
                ans.push_back(mat[bottom][i]);
            }
            bottom--;
            for(int i=bottom;i>=top && left<=right;i--){
                ans.push_back(mat[i][left]);
            }
            left++;
        }
        return ans;
    }
};