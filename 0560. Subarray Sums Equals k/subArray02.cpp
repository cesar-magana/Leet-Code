int subarraySum(vector<int>& nums, int k) {
    int count = 0;
    int n = nums.size();
    vector<int> sum(n+1);
    sum[0] = 0;
    for ( int i = 1; i < n+1; i++) {
        sum[i] = sum[i-1]+nums[i-1];
    }
    for ( int start = 0; start < n; start++ ) {
        for ( int end = start + 1; end <= n; end++ ) {
            if ( sum[end]-sum[start] == k )
                count++;
        }
    }
    return count;
}