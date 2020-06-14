string addStrings(string num1, string num2) {
    int index1 = num1.size() - 1;
    int index2 = num2.size() - 1;
    int carry = 0;
    string result;

    while ( index1 > -1 || index2 > -1 || carry ) {
        int d1 = (index1 > -1) ? num1[index1--] - '0' : 0;
        int d2 = (index2 > -1) ? num2[index2--] - '0' : 0;
        int sum = d1 + d2 + carry;
        carry = sum / 10;
        result += '0' + sum % 10;
    }
    reverse( result.begin(), result.end() );
    return result;
}