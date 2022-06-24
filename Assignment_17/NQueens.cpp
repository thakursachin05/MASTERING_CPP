// https://leetcode.com/problems/n-queens/
// 51. N-Queens


bool isPossible(vector<string> &ans,int row,int col,int n){
    int rowDup = row;
    int colDup = row;

    while(rowDup--){
        if(ans[rowDup][col] == 'Q') return false;
    }

    rowDup = row-1;
    colDup = col-1;

    while(rowDup >= 0 && colDup >= 0){
        if(ans[rowDup--][colDup--]=='Q') return false;
    }

    rowDup = row;
    colDup = col;

    while(rowDup >= 0 && colDup < n){
        if(ans[rowDup--][colDup++]=='Q') return false;
    }
    return true;
}

void solve(int row,vector<string> &ans,vector<vector<string>> &result,int n){
    if(row==n){
        result.push_back(ans);
        return ;
    }

    for(int col = 0; col<n; col++){
        if(isPossible(ans,row,col,n)){
            ans[row][col] = 'Q';
            solve(row+1,ans,result,n);
            ans[row][col] = '.';
        }
    }
}

vector<vector<string>> solveNQueens(int n) {
    vector<vector<string>> result;

    string s;
    for(int i=0;i<n;i++) s.push_back('.');
    vector<string> ans(n,s);
    solve(0,ans,result,n);
    return result;
}