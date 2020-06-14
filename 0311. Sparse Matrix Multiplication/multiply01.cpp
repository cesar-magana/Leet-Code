vector<vector<int>> multiply(vector<vector<int>>& A, vector<vector<int>>& B) {

    int m = A.size();
    int n = A[0].size();
    int p = B[0].size();
    vector<vector<int>> res(m, vector<int>(p,0));

    for( int i = 0; i < m; i++ ) {
        for( int k = 0; k < n; k++ ) {
            if( A[i][k] != 0 )
                for( int j = 0; j < p; j++ ) {
                    res[i][j] += A[i][k] * B[k][j];
                }
        }
    }
    return res;
}