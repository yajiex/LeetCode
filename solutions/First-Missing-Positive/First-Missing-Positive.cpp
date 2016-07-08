
class Solution {
public:
    int firstMissingPositive(int A[], int n) {
        for(int i=0;i<n;i++)
            if(A[i]>0 && A[i]<n)
                if(A[i]-1!=i && A[i]!=A[A[i]-1])
                {
                    swap(A[i],A[A[i]-1]);
                    i--;
                }
        for(int i=0;i<n;i++)
            if(A[i]-1!=i)
                return i+1;
        return n+1;
    }
};


 