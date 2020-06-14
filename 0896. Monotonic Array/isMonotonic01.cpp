int sign ( int x ) {
    return (x > 0) - (x < 0);
}
bool isMonotonic(vector<int>& A) {
    int n = A.size();
    if ( n < 3 ) return true;
    bool increasing = false;
    bool decreasing = false;
    for ( int i = 1; i < n; i++ ) {
        int current = sign( A[i]-A[i-1] );
        if ( current > 0 ) increasing = true;
        if ( current < 0 ) decreasing = true;
        if ( increasing && decreasing ) return false;
    }
    return true;
}