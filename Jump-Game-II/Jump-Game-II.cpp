
class Solution {
public:
    int jump(int A[], int n) {
        int ans=0;
        int last=0;
        int right=0;
        for(int i=0;i<n;i++)
        {
            if(i>last)
            {
                ans++;
                last=right;
            }
            right=max(right,i+A[i]);
        }
        return ans;
    }
};


 