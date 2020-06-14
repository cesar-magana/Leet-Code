vector<vector<int>> multiply(vector<vector<int>>& A, vector<vector<int>>& B) {

    if (A.size() == 0 || A[0].size() == 0 || B.size() == 0 || B[0].size() == 0) 
        return vector<vector<int>>(0,vector<int>(0));
    int m = A.size(), n = B.size(), d = B[0].size();
    vector<vector<int>> res(m,vector<int>(d,0));
    unordered_map<int,unordered_map<int,int>> map;

    for (int i = 0; i < m; i++) {
        unordered_map<int,int> temp;
        for (int j = 0; j < n; j++) 
            if (A[i][j] != 0)     
                temp[j] =  A[i][j];
        map[i] = temp;
    }
    for (auto key1 : map) {
        for (int i = 0; i < d; i++) {
            for (auto key2 : key1.second) {
                res[key1.first][i] += key2.second * B[key2.first][i];
            }
        }
    }
    return res;
}