bool isAlienSorted(vector<string>& words, string order) {
	unordered_map<char, int> mp;
	for(int i = 0; i < 26; i++) mp[order[i]] = i;
	return is_sorted(begin(words), end(words), [&mp](string &a, string &b) {
		for(int i = 0; i < min(a.size(), b.size()); i++) 
			if(mp[a[i]] != mp[b[i]]) 
				return mp[a[i]] < mp[b[i]];
		return a.size() < b.size();
	});
}