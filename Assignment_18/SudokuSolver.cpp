// https://leetcode.com/problems/sudoku-solver/
// 37. Sudoku Solver

class Solution {
public:
    bool canBe(int row,int col,char a,vector<vector<char>> &board){
        for(int i=0;i<9;i++){
            if(board[row][i]==a) return false;
            if(board[i][col]==a) return false;
            if(board[3*(row/3)+i/3][3*(col/3)+i%3]==a) return false;
        }
        return true;
    }
    
    bool canPlace(vector<vector<char>>& board){
        for(int row=0;row<9;row++){
            for(int col=0;col<9;col++){
                if(board[row][col]=='.'){
                    for(char a='1';a<='9';a++){
                        if(canBe(row,col,a,board)){
                            board[row][col]=a;
                            if(canPlace(board)) return true;
                            else board[row][col] = '.';
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
    void solveSudoku(vector<vector<char>>& board) {
        canPlace(board);
    }
};
