// https://leetcode.com/problems/n-queens/
// 51. N-Queens

class Solution {
public:
    bool isPossible(int row,int col,int n,vector<string>& board){
        int drow = row;
        int dcol = col;
        while(drow>=0 && dcol>=0){
            if(board[drow--][dcol--]=='Q'){
                return false;
            }
        }
        
        drow = row,dcol=col;
        
        while(drow>=0 && dcol<n){
             if(board[drow--][dcol++]=='Q'){
                return false;
            }
        }
        
        drow = row;
        dcol = col;
        while(drow>=0 && dcol<n){
             if(board[drow--][dcol]=='Q'){
                return false;
            }
        }
        
        return true;
        
    }
    
    void place(int row,int n,vector<vector<string>>& res,vector<string>& board){
        if(row==n){
            res.push_back(board);
            return;
        }
        
        for(int col = 0;col<n;col++){
            if(isPossible(row,col,n,board)){
                board[row][col] = 'Q';
                place(row+1,n,res,board);
                board[row][col] = '.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        string s = "";
        for(int i=0;i<n;i++){
            s.push_back('.');
        }
        
        vector<string> board(n,s);
        
        vector<vector<string>> res;
        
        place(0,n,res,board);
        return res;
    }
};
