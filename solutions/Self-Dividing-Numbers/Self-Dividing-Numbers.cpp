class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> res;
        for (int i = left; i <= right; i++)
            if (dividingNumber(i)) res.push_back(i);
        return res;
    }

    bool dividingNumber(int num) {
        for (int n = num; n > 0; n /= 10)
            if (!(n % 10) || num % (n % 10)) return false;
        return true;
    }
};