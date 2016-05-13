
class Solution {
public:
    bool ok(vector<vector<char> > &board,int x,int y,int n)
    {
        for(int i=0;i<n;i++)
            if(x!=i && board[i][y]==board[x][y])
                return false;
        for(int j=0;j<n;j++)
            if(y!=j && board[x][j]==board[x][y])
                return false;
        int t=sqrt(n);
        int xx=x/t*t;
        int yy=y/t*t;
        for(int i=xx;i<xx+t;i++)
            for(int j=yy;j<yy+t;j++)
                if(x!=i && y!=j && board[i][j]==board[x][y])
                    return false;
        return true;
    }
    bool dfs(vector<vector<char> > &board,int pos,int n)
    {
        if(pos==n*n)
            return true;
        int x=pos/n;
        int y=pos%n;
        if(board[x][y]=='.')
            for(char c='1';c<='9';c++)
            {
                board[x][y]=c;
                if(ok(board,x,y,n) && dfs(board,pos+1,n))
                    return true;
                board[x][y]='.';
            }
        else if(dfs(board,pos+1,n))
            return true;
        return false;
    }
    void solveSudoku(vector<vector<char> > &board) {
        dfs(board,0,board.size());
    }
};


 