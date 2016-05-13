
class Solution {
public:
    int searchInsert(int A[], int n, int target) {
        int l=0;
        int r=n-1;
        while(l<=r)
        {
            int m=l+(r-l)/2;
            if(A[m]==target)
                return m;
            else if(A[m]>target)
                r=m-1;
            else
                l=m+1;
        }
        return l;
    }
};


 