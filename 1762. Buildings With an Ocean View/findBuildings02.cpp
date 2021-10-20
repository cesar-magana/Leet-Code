class Solution {
public:
    vector<int> findBuildings(vector<int>& heights) {
        vector<int> output;
        int n = heights.size();
        for ( int i = 0; i < n; ++i ) {
            while ( !output.empty() && heights[ output.back() ] <= heights[i]) {
                output.pop_back();
            }
            output.push_back( i );
        }
        return output;
    }
};