
class Solution {
public:
    bool isValidSudoku(vector<vector<char> > &board) {
        int n=board.size();
        for(int i=0;i<n;i++)
        {
            vector<bool> row(n,false);
            for(int j=0;j<n;j++)
            {
                if(board[i][j]=='.')
                    continue;
                if(row[board[i][j]-'1'])
                    return false;
                row[board[i][j]-'1']=true;
            }
        }
        for(int j=0;j<n;j++)
        {
            vector<bool> col(n,false);
            for(int i=0;i<n;i++)
            {
                if(board[i][j]=='.')
                    continue;
                if(col[board[i][j]-'1'])
                    return false;
                col[board[i][j]-'1']=true;
            }
        }
        int t=sqrt(n);
        for(int i=0;i<n;i+=t)
        {
            for(int j=0;j<n;j+=t)
            {
                vector<bool> grid(n,false);
                for(int k=0;k<n;k++)
                {
                    int x=i+k/3;
                    int y=j+k%3;
                    if(board[x][y]=='.')
                        continue;
                    if(grid[board[x][y]-'1'])
                        return false;
                    grid[board[x][y]-'1']=true;
                }
            }
        }
        return true;
    }
};


 