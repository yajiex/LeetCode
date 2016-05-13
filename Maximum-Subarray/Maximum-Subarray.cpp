
class Solution {
public:
    int maxSubArrayHelper(int A[],int l,int r)
    {
        if(l>=r)
            return A[l];
        int m=l+(r-l)/2;
        int left=maxSubArrayHelper(A,l,m);
        int right=maxSubArrayHelper(A,m+1,r);
        int lmax=A[m];
        int temp=0;
        for(int i=m;i>=l;i--)
        {
            temp+=A[i];
            lmax=max(lmax,temp);
        }
        temp=0;
        int rmax=A[m+1];
        for(int i=m+1;i<=r;i++)
        {
            temp+=A[i];
            rmax=max(rmax,temp);
        }
        return max(max(left,right),lmax+rmax);
    }
    int maxSubArray(int A[], int n) {
        return maxSubArrayHelper(A,0,n-1);
    }
};


 