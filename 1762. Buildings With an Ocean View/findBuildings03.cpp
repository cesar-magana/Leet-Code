class Solution {
public:
    vector<int> findBuildings(vector<int>& heights) {
        vector<int> output;
        stack<int> stk;
        int n = heights.size();
        
        for ( int i = n-1; i > -1; --i ) {
            while ( !stk.empty() && heights[stk.top()] < heights[i] ) {
                stk.pop();
            }
            if ( stk.size() == 0 ) {
                output.push_back(i);
            }
            stk.push(i);
        }
        reverse( output.begin(), output.end() );
        return output;
    }
};