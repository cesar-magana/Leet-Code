int findKthLargest(vector<int>& nums, int k) {
    multiset<int> mset;
    for (int num : nums) {
        mset.insert(num);
        if (mset.size() > k) {
            mset.erase(mset.begin());
        }
    }
    return *mset.begin();
}