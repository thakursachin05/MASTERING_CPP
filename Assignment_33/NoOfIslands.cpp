class Solution {
public:
    void dfs(int i,int j,vector<vector<char>> &grid){
        if(i>=grid.size() || i<0 || j>=grid[0].size() || j<0) return;
        
        grid[i][j] = '2';
        vector<int> dir = {0,1,0,-1,0};
        for(int k=0;k<4;k++){
            int dx = dir[k];
            int dy = dir[k+1];
            if(i+dx>=grid.size() || i+dx<0 || j+dy>=grid[0].size() || j+dy<0) continue;
            if(grid[i+dx][j+dy] == '1'){
                dfs(i+dx,j+dy,grid);
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int count = 0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j] == '1'){
                    count++;
                    dfs(i,j,grid);
                }
            }
        }
        return count;
    }
};