void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int index1 = m-1;
    int index2 = n-1;
    int finalIndex = m+n-1;
    
    while ( index1 > -1 && index2 > -1 ) {
        if ( nums1[index1] > nums2[index2] )
            nums1[finalIndex--] = nums1[index1--];
        else
            nums1[finalIndex--] = nums2[index2--];
    }
    while ( index2 > -1) {
        nums1[ finalIndex-- ] = nums2[index2--];
    }   
}