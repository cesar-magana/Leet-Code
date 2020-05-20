vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    set<int> set( nums1.begin(), nums1.end() );
    vector<int> intersection;

    for (auto number : nums2 )
        if ( set.erase( number ) )
            intersection.push_back( number );
    return intersection;
}