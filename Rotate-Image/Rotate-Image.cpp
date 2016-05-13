
class Solution {
public:
    void rotate(vector<vector<int> > &matrix) {
        int n=matrix.size()-1;
        for(int i=0;i<n;i++)
            for(int j=i;j<n-i;j++)
            {
                int x=i;
                int y=j;
                int prev=matrix[x][y];
                int next;
                for(int k=0;k<4;k++)
                {
                    next=matrix[y][n-x];
                    matrix[y][n-x]=prev;
                    prev=next;
                    int temp=x;
                    x=y;
                    y=n-temp;
                }
            }
    }
};


 