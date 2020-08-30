int maximumSwap(int num) {
    string numstr = std::to_string(num);
    int n = numstr.length();
    int maxIndex = -1; 
    int maxDigit = -1;
    int leftIndex = -1; 
    int rightIndex = -1;        

    for ( int i = n - 1; i > -1; --i) {
        if (numstr[i] > maxDigit) {
            maxDigit = numstr[i];
            maxIndex = i;
            continue;
        }
        if (numstr[i] < maxDigit) {
            leftIndex = i;
            rightIndex = maxIndex;
        }
    }
    if (leftIndex == -1) return num;
    std::swap(numstr[leftIndex], numstr[rightIndex]);
    return std::stoi(numstr);
}