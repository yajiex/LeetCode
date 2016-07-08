
class Solution {
public:
    vector<int> searchRange(int A[], int n, int target) {
        vector<int> ans;
        int ansl=-1;
        int ansr=-1;
        int l=0;
        int r=n-1;
        while(l<=r)
        {
            int m=l+(r-l)/2;
            if(A[m]==target)
            {
                if(m==0)
                {
                    ansl=0;
                    break;
                }
                else if(A[m]==A[m-1])
                {
                    l=0;
                    r=m-1;
                }
                else
                {
                    ansl=m;
                    break;
                }
            }
            else if(A[m]<target)
                l=m+1;
            else
                r=m-1;
        }
        l=0;
        r=n-1;
        while(l<=r)
        {
            int m=l+(r-l)/2;
            if(A[m]==target)
            {
                if(m==n-1)
                {
                    ansr=n-1;
                    break;
                }
                else if(A[m]==A[m+1])
                {
                    l=m+1;
                    r=n;
                }
                else
                {
                    ansr=m;
                    break;
                }
            }
            else if(A[m]<target)
                l=m+1;
            else
                r=m-1;
        }
        ans.push_back(ansl);
        ans.push_back(ansr);
        return ans;
    }
};


 