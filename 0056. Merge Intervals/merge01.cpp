bool cmp(vector<int> *lhs, vector<int> *rhs) {
    return (*lhs)[0] < (*rhs)[0];
}

vector<vector<int>> merge(vector<vector<int>>& intervals) {
    vector<vector<int>> merged;
    if (intervals.size() <= 0) { return merged; }

    vector<vector<int>*> sorted;
    for ( int i=0;i<intervals.size();i++ ) {
        sorted.push_back(&intervals[i]);
    }

    sort(sorted.begin(), sorted.end(), cmp);

    vector<int> v(2);
    v[0] = (*sorted[0])[0];
    v[1] = (*sorted[0])[1];

    for (int i=1;i<sorted.size();i++) {
        
        int vLo = (*sorted[i])[0];
        int vHi = (*sorted[i])[1];
        
        if (vLo <= v[1]) {
            v[1] = max(v[1], vHi);
        } else {
            merged.push_back(v);
            v[0] = vLo;
            v[1] = vHi;
        }
    }

    merged.push_back(v);
    return merged;    
}