class Solution {
public:
    vector<int> findBuildings(vector<int>& heights) {
        vector<int> output;
        int n = heights.size();
        int max = 0;
        for ( int i = n-1; i > -1; i-- ) {
            if ( heights[i] > max ) {
                output.push_back( i );
                max = heights[i];
            }
        }
        reverse( output.begin(), output.end() );
        return output;
    }
};