vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int,int> mp;
    int numToFind;
    for ( int i = 0; i < nums.size(); i++ ) {
        numToFind = target - nums[ i ];
        if ( mp.count( numToFind ) ) {
            return { mp[ numToFind ], i };
        } else {
            mp[ nums[ i ] ] = i;
        }
    }
    throw invalid_argument("No two sum solution.");
}
