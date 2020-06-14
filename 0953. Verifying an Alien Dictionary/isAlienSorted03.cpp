bool isAlienSorted(vector<string>& words, string order) {
    unordered_map<char, char> ord;
    string alpha = "abcdefghijklmnopqrstuvwxyz";
    vector<string> orig;
    int ind = 0;
    for (char ch : order) {
        ord[ch] = alpha[ind++];
    }
    for (string word : words) {
        string val = "";
        for (char ch : word) {
            val += ord[ch];
        }
        orig.push_back(val);
    }
    return is_sorted(orig.begin(), orig.end());
}