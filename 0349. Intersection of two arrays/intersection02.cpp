vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    unordered_map<int,int> mp;
    vector<int> intersection;
    for ( auto number : nums1 ) {
        mp[ number ]++;
    }
    for ( auto number : nums2 ) {
        if ( mp[ number ] ) {
            intersection.push_back( number );
            mp.erase( number );
        }
    }
    return intersection;
}