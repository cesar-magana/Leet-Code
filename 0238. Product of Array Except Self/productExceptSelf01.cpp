    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();

        if ( n < 2 ) {
            throw ("Not enough numbers");
        }

        int temp = 1;
        vector<int> x(n,1);

        for ( int i = n-2; i > -1; i-- ) {
            x[i] = x[i+1]*nums[i+1];
        }    

        for ( int i = 0; i < n; i++ ) {
            x[i] *= temp;
            temp *= nums[i];
        }

        return x;        
    }