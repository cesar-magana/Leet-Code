int subarraySum(vector<int>& nums, int k) {
    int count = 0;
    int sum = 0;
    int n = nums.size();
    unordered_map<int,int> map;
    map[0] = 1;
    for ( int i = 0; i < n; i++) {
        sum += nums[i];
        if ( map.count(sum-k) )
            count += map[sum-k];
        map[sum]++;
    }
    return count;
}