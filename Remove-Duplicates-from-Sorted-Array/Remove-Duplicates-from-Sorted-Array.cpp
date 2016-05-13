
class Solution {
public:
    int removeDuplicates(int A[], int n) {
        int ans=1;
        for(int i=1;i<n;i++)
            if(A[i]!=A[ans-1])
                A[ans++]=A[i];
        return n==0?0:ans;
    }
};


 