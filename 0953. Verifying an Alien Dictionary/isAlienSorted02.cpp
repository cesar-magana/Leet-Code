bool isAlienSorted(vector<string>& words, string order) {
    char x = 'a';
    char m[26];
    for(int i=0;i<order.size();i++){
        m[order[i]-'a']=x;
        x++;
    }

    for(int i=0;i<words.size();i++){
        for(int j=0;j<words[i].size();j++){
           words[i][j]=m[words[i][j]-'a'];
        }
    }
    return is_sorted(words.begin(), words.end());
}