// https://www.interviewbit.com/problems/min-steps-in-infinite-grid/
// Min Steps in Infinite Grid


int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int totalMoves = 0;
    for(int i=0;i<A.size()-1;i++){
        totalMoves += max(abs(A[i]-A[i+1]),abs(B[i]-B[i+1]));
    }
    return totalMoves;
}
