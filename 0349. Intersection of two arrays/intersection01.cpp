vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    unordered_set<int> set(nums1.begin(), nums1.end());
    vector<int> intersection;
    
    for ( auto number : nums2 ) {
        if ( set.count(number) ) {
            intersection.push_back( number );
            set.erase( number );
        }
    }
    return intersection;
}