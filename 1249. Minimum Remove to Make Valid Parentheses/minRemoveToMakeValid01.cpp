string minRemoveToMakeValid(string s) {
    string t;
    int open = 0;
    int n = s.length();
    for ( int i = 0; i < n; i++ ) {
        if ( s[i] == '(' )
            open++;
        else if ( s[i]==')' ) {
            if ( open == 0 ) continue;
            open--;
        }
        t += s[i];
    }
    n = t.size();
    string ans;
    for ( int i = n-1; i > -1; i-- ) {
        if ( t[i] =='(' && open > 0 ) {
            open--;
            continue;
        }
        ans += t[i];
    }
    reverse( ans.begin(), ans.end() );
    return ans;
}