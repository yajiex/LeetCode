
class Solution {
public:
    bool canJump(int A[], int n) {
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(i>ans)
            {
                return false;
            }
            ans=max(ans,i+A[i]);
            if(ans>=n-1)
            {
                return true;
            }
        }
        return ans>=n-1;
    }
};


 