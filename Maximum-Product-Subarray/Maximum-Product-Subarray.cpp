
class Solution {
public:
    int maxProduct(int A[], int n) {
        if(n==0)
            return 0;
        int ans=A[0];
        int ansmax=A[0];
        int ansmin=A[0];
        for(int i=1;i<n;i++)
        {
            int tempmax=ansmax;
            int tempmin=ansmin;
            ansmax=max(max(tempmax*A[i],tempmin*A[i]),A[i]);
            ansmin=min(min(tempmax*A[i],tempmin*A[i]),A[i]);
            ans=max(ans,ansmax);
        }
        return ans;
    }
};
 