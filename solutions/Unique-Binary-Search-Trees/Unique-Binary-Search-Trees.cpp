
class Solution {
public:
    int numTrees(int n) {
        if(n==0)
            return 1;
        else if(n==1)
            return 1;
        else if(n==2)
            return 2;
        else
        {
            int ans=0;
            for(int i=0;i<n;i++)
                ans+=numTrees(i)*numTrees(n-i-1);
            return ans;
        }
    }
};


 