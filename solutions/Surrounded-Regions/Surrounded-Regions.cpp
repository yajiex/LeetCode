
class Solution {
public:
    int n;
    int m;
    int dx[4]={0,1,0,-1};
    int dy[4]={1,0,-1,0};
    bool ok(int x,int y)
    {
        return x>=0 && x<n && y>=0 && y<m;
    }
    void bfs(vector<vector<char> >&board,int x,int y)
    {
        queue<int>qx;
        queue<int>qy;
        qx.push(x);
        qy.push(y);
        board[x][y]='A';
        while(!qx.empty())
        {
            int xx=qx.front();
            qx.pop();
            int yy=qy.front();
            qy.pop();
            for(int i=0;i<4;i++)
            {
                int tx=xx+dx[i];
                int ty=yy+dy[i];
                if(ok(tx,ty) && board[tx][ty]=='O')
                {
                    qx.push(tx);
                    qy.push(ty);
                    board[tx][ty]='A';
                }
            }
        }
    }
    void solve(vector<vector<char>> &board) {
        n=board.size();
        if(n==0)
            return;
        m=board[0].size();
        for(int i=0;i<n;i++)
        {
            if(board[i][0]=='O')
                bfs(board,i,0);
            if(board[i][m-1]=='O')
                bfs(board,i,m-1);
        }
        for(int j=0;j<m;j++)
        {
            if(board[0][j]=='O')
                bfs(board,0,j);
            if(board[n-1][j]=='O')
                bfs(board,n-1,j);
        }
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
            {
                if(board[i][j]=='O')
                    board[i][j]='X';
                else if(board[i][j]=='A')
                    board[i][j]='O';
            }
    }
};


 