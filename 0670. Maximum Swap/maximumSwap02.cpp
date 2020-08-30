class Solution {
public:
    vector<int> intToVector( int number ) {
        vector<int> digits;
        while ( true ) {
            digits.push_back( number %10 );
            number /= 10;
            if( number == 0 )
                return digits;
            }
        }
    int vectorToInt( vector<int> digits ) {
        int result = 0;
        for ( int i = digits.size()-1; i > -1; i-- ) {
            result += digits[ i ]*pow(10,i);
        }
        return result;
    }
    int maximumSwap(int num) {
        vector<int> digits = intToVector( num );
        int n = digits.size();
        int max = INT_MIN;
        int indexMax;
        for ( int i=0; i< n; i++ ) {
            if ( digits[i] > max ) {
                max = digits[i];
                indexMax = i;
            }
        }
        if ( indexMax == n - 1)
          swap( digits[n-2],digits[indexMax] );
        else
            swap( digits[n-1],digits[indexMax] );       
        
        return vectorToInt( digits );
    }
};