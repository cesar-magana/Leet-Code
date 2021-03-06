    bool canPartition(vector<int>& arr) {
        int sum = accumulate(arr.begin(), arr.end(), 0);
        int n = arr.size();
        if ( sum%2 == 1 ) return false;
        
        bool part[sum / 2 + 1][n + 1];  

        // initialize top row as true  
        for (int i = 0; i < n+1; i++)  
            part[0][i] = true;  

        // initialize leftmost column,  
        // except part[0][0], as 0  
        for (int i = 1; i <= sum / 2; i++)  
            part[i][0] = false;  

        // Fill the partition table in botton up manner  
        for (int i = 1; i <= sum / 2; i++)  
        {  
            for (int j = 1; j <= n; j++)  
            {  
                part[i][j] = part[i][j - 1];  
                if (i >= arr[j - 1])  
                part[i][j] = part[i][j] ||  
                             part[i - arr[j - 1]][j - 1];  
            }      
        }  

        /* // uncomment this part to print table  
        for (i = 0; i <= sum/2; i++)  
        {  
        for (j = 0; j <= n; j++)  
            cout<<part[i][j];  
        cout<<endl;  
        } */
        return part[sum / 2][n];          
    }