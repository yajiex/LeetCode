
// class Solution {
// public:
//     int dx[4]={0,1,0,-1};
//     int dy[4]={1,0,-1,0};
//     bool ok(int x,int y,int n,int m)
//     {
//         return x>=0 && x<n && y>=0 && y<m;
//     }
//     bool dfs(vector<vector<char> >&board,int n,int m,int len,string word,vector<vector<bool> >&visit,int x,int y,int pos)
//     {
//         if(pos==len)
//             return true;
//         for(int i=0;i<4;i++)
//         {
//             int tx=x+dx[i];
//             int ty=y+dy[i];
//             if(ok(tx,ty,n,m) && visit[tx][ty]==false && board[tx][ty]==word[pos])
//             {
//                 visit[tx][ty]=true;
//                 if(dfs(board,n,m,len,word,visit,tx,ty,pos+1))
//                     return true;
//                 visit[tx][ty]=false;
//             }
//         }
//         return false;
//     }
//     bool exist(vector<vector<char> > &board, string word) {
//         int len=word.length();
//         if(len==0)
//             return true;
//         int n=board.size();
//         if(n==0)
//             return false;
//         int m=board[0].size();
//         vector<vector<bool> >visit(n, vector<bool>(m,false));
//         for(int i=0;i<n;i++)
//             for(int j=0;j<m;j++)
//                 if(board[i][j]==word[0])
//                 {
//                     visit[i][j]=true;
//                     if(dfs(board,n,m,len,word,visit,i,j,1))
//                         return true;
//                     visit[i][j]=false;
//                 }
//         return false;
//     }
// };

// Review - 20190726
// O(mn4^k)
class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[i].size();j++)
            {
                if (board[i][j] == word[0])
                {
                    vector<vector<bool>> visited(board.size(), vector<bool>(board[i].size(), false));
                    if (dfs(board, visited, i, j, 0, word))
                    {
                        return true;
                    }
                }
            }
        }
        return false;
    }
    
private:
    bool dfs(vector<vector<char>>& board, vector<vector<bool>>& visited, int i, int j, int index, string word)
    {   
        if (index == word.length())
        {
            return true;
        }
        
        if(i < 0 || i >= board.size() || j < 0 || j >= board[i].size() || visited[i][j])
        {
            return false;
        }
        
        if (board[i][j] != word[index])
        {
            return false;
        }
        
        visited[i][j] = true;
        bool ans = dfs(board, visited, i+1, j, index + 1, word) || dfs(board, visited, i-1, j, index + 1, word) || dfs(board, visited, i, j+1, index + 1, word) || dfs(board, visited, i, j-1, index+1, word);
        visited[i][j] = false;
        return ans;
    }
};