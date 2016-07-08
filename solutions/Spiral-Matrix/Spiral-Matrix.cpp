
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int> > &matrix) {
        vector<int>ans;
        int n=matrix.size();
        if(n==0)
            return ans;
        int m=matrix[0].size();
        int x=0;
        int y=0;
        while(x<n&&y<m)
        {
            for(int i=y;i<m;i++)
                ans.push_back(matrix[x][i]);
            for(int i=x+1;i<n;i++)
                ans.push_back(matrix[i][m-1]);
            if(x!=n-1)
                for(int i=m-2;i>=y;i--)
                    ans.push_back(matrix[n-1][i]);
            if(y!=m-1)
                for(int i=n-2;i>x;i--)
                    ans.push_back(matrix[i][y]);
            x++;
            y++;
            n--;
            m--;
        }
        return ans;
    }
};


 