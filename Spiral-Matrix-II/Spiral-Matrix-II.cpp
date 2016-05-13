
class Solution {
public:
    vector<vector<int> > generateMatrix(int n) {
        vector<vector<int> > ans(n,vector<int>(n,0));
        int x=0;
        int y=0;
        int num=1;
        while(x<n)
        {
            for(int i=y;i<n;i++)
                ans[x][i]=num++;
            for(int i=x+1;i<n;i++)
                ans[i][n-1]=num++;
            if(x!=n-1)
                for(int i=n-2;i>=y;i--)
                    ans[n-1][i]=num++;
            if(y!=n-1)
                for(int i=n-2;i>x;i--)
                    ans[i][y]=num++;
            x++;
            y++;
            n--;
        }
        return ans;
    }
};

 