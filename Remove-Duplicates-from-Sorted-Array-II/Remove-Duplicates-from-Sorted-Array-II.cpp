
class Solution {
public:
    int removeDuplicates(int A[], int n) {
        int ans=1;
        for(int i=1;i<n;i++)
            if(i==1 || A[i]!=A[ans-2])
                A[ans++]=A[i];
        return n==0?0:ans;
    }
};

 