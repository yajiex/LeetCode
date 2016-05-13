
class Solution {
public:
    int dx[4]={0,1,0,-1};
    int dy[4]={1,0,-1,0};
    bool ok(int x,int y,int n,int m)
    {
        return x>=0 && x<n && y>=0 && y<m;
    }
    bool dfs(vector<vector<char> >&board,int n,int m,int len,string word,vector<vector<bool> >&visit,int x,int y,int pos)
    {
        if(pos==len)
            return true;
        for(int i=0;i<4;i++)
        {
            int tx=x+dx[i];
            int ty=y+dy[i];
            if(ok(tx,ty,n,m) && visit[tx][ty]==false && board[tx][ty]==word[pos])
            {
                visit[tx][ty]=true;
                if(dfs(board,n,m,len,word,visit,tx,ty,pos+1))
                    return true;
                visit[tx][ty]=false;
            }
        }
        return false;
    }
    bool exist(vector<vector<char> > &board, string word) {
        int len=word.length();
        if(len==0)
            return true;
        int n=board.size();
        if(n==0)
            return false;
        int m=board[0].size();
        vector<vector<bool> >visit(n, vector<bool>(m,false));
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                if(board[i][j]==word[0])
                {
                    visit[i][j]=true;
                    if(dfs(board,n,m,len,word,visit,i,j,1))
                        return true;
                    visit[i][j]=false;
                }
        return false;
    }
};


 