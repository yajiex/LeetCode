class Solution {
public:
    bool isPerfectSquare(int num) {
        int l = 1;
        int r = num;
        while(l<=r) {
            long m = l + (r-l)/2;
            if(m*m == num) {
                return true;
            } else if(m*m > num) {
                r = (int)m - 1;
            } else {
                l = (int)m + 1;
            }
        }
        return false;
    }
};