void helper(int idx, string A, int k, string& maxStr){
    if(idx==A.length()) return;
    if(A>maxStr && k>=0){ maxStr = A;}
    for(int i=idx; i<A.length(); i++){
        swap(A[idx], A[i]);
        if(i==idx) helper(idx+1, A, k, maxStr);
        else helper(idx+1, A, k-1, maxStr);
        swap(A[idx], A[i]);
    }
}
string Solution::solve(string A, int B) {   
    if(A.length()<=1) return A;
    string maxStr = A;
    int idx = 0;
    helper(idx, A, B, maxStr);
    return maxStr;
}
