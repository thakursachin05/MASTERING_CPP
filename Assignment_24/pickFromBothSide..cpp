int Solution::solve(vector<int> &A, int B) {
    if(B>A.size()) return -1;
    
    int sum = 0;
    for(int i=0;i<B;i++){
        sum += A[i];
    }
    
    int maxSum = sum;
    int j = B-1;
    for(int i=A.size()-1;i>A.size()-B-1;i--){
        sum = sum - A[j] + A[i];
        j--;
        maxSum = max(maxSum,sum);
    }
    
    return maxSum;
}
