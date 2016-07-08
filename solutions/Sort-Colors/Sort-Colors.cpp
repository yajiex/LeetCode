
class Solution {
public:
    void sortColors(int A[], int n) {
        int p0=0;
        int p1=0;
        int p2=n-1;
        while(p1<=p2)
            if(A[p1]==0)
            {
                swap(A[p0],A[p1]);
                p0++;
                p1++;
            }
            else if(A[p1]==1)
                p1++;
            else
            {
                swap(A[p1],A[p2]);
                p2--;
            }
    }
};


 