
class Solution {
public:
    bool ok(vector<int> visit,int endRow)
    {
        for(int row=0;row<endRow;row++)
            if(visit[row]==visit[endRow] || abs(visit[row]-visit[endRow]) == endRow-row)
                return false;
        return true;
    }
    void dfs(vector<int> &visit,int n,int row,int &ans)
    {
        if(row==n)
        {
            ans++;
            return;
        }
        for(int col=0;col<n;col++)
        {
            visit[row]=col;
            if(ok(visit,row))  
                dfs(visit,n,row+1,ans);
        }
    }
    int totalNQueens(int n) {
        vector<int> visit(n,0);
        int ans=0;
        dfs(visit,n,0,ans);
        return ans;
    }
};


 