vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    unordered_set<int> s1( begin( nums1 ), end( nums1 ) ), s2;
    
    for ( auto n : nums2 ) 
        if ( s1.count(n) ) 
            s2.insert(n);
    
    return vector<int>( begin(s2), end(s2) );
}