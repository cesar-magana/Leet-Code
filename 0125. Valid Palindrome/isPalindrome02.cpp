bool isPalindrome(string s) {
    string filtered_string;

    for (auto ch : s) {
      if (isalnum(ch))
        filtered_string += tolower(ch);
    }
    int n = filtered_string.size();

    for (int i = 0; i < n/2; i++ ) {
        if ( filtered_string[i] != filtered_string[n-1-i] )
            return false;
    }
    return true;
}