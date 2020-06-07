int subarraySum(vector<int>& nums, int k) {
    int count = 0;
    int n = nums.size();
    for ( int start = 0; start < n; start++ ) {
        for ( int end = start + 1; end <= n; end++ ) {
            int sum = 0;
            for ( int i = start; i < end; i++ ) 
                sum += nums[i];
            if ( sum == k)
                    count++;
        }
    }
    return count;
}