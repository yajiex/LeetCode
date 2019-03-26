class Solution {
public:
    vector<int> fairCandySwap(vector<int>& A, vector<int>& B) {
        //
    // Note that the problem statement says that Alice and Bob need to exchange one candy each, no more or no less.
    //
    // Assume x needs to be removed and y needs to be added to A to equalize, so:
    //  Sum(A) - x + y = Sum(B) - y + x
    //  therefore, Sum(A) - Sum(B) = -2y + 2x
    //  therefore, x = ((Sum(A) - Sum(B)) / 2) + y
    //  lets call ((Sum(A) - Sum(B)) / 2), delta
    //
    
    int sumA = 0;
    int sumB = 0;
    
    for (auto e : A)
        sumA += e;
    
    for (auto e : B)
        sumB += e;
    
    int delta = (sumA - sumB) / 2;
    
    set<int> searchA;
    for (auto x : A)
    {
        //cout << x << endl;
        searchA.insert(x);
    }
    
    
    //cout << endl;
    for (auto y : B)    
    {
        //cout << y << setw(5) << delta + y << endl;
        if (searchA.count(delta + y) > 0)
        {
            return vector<int>{delta + y, y};
        }
    }
    
    return vector<int>();
    }
};