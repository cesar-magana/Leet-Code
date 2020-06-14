bool isMonotonic(vector<int>& A) 
{
    return is_sorted(A.begin(), A.end(), greater<int>()) || 
           is_sorted(A.begin(), A.end(), less<int>());
}