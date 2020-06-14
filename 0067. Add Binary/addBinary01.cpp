string addBinary(string a, string b) {
    int idx1 = a.size() - 1, idx2 = b.size() - 1;
    int carry(0);
    string ans;

    while(idx1 > -1 || idx2 > -1 || carry) {
        int d1 = (idx1 >= 0) ? a[idx1--] - '0' : 0;
        int d2 = (idx2 >= 0) ? b[idx2--] - '0' : 0;
        int sum = d1 + d2 + carry;
        carry = sum/2;
        ans += '0' + (sum % 2);    // ans = sum%10 + '0' + ans; and no reverse
    }

    reverse(ans.begin(), ans.end());
    return ans;        
}