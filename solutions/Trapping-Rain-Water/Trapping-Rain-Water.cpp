
class Solution {
public:
    int trap(int A[], int n) {
        int l=0;
        int r=n-1;
        int sum=0;
        int del=0;
        int curH=0;
        while(l<=r)
        {
            int minH=min(A[l],A[r]);
            if(minH>curH)
            {
                sum+=(minH-curH)*(r-l+1);
                curH=minH;
            }
            if(A[l]<A[r])
                del+=A[l++];
            else
                del+=A[r--];
        }
        return sum-del;
    }
};


 