
class Solution {
public:
    bool ok(vector<int> visit,int endRow)
    {
        for(int row=0;row<endRow;row++)
            if(visit[row]==visit[endRow] || abs(visit[row]-visit[endRow])==endRow-row)
                return false;
        return true;
    }
    void dfs(vector<int> &visit,int n,int row,vector<vector<string> > &ans)
    {
        if(row==n)
        {
            vector<string> vec;
            for(int i=0;i<n;i++)
            {
                string str="";
                for(int j=0;j<n;j++)
                {
                    if(visit[i]==j)
                        str+='Q';
                    else
                        str+='.';
                }
                vec.push_back(str);
            }
            ans.push_back(vec);
            return ;
        }
        for(int col=0;col<n;col++)
        {
            visit[row]=col;
            if(ok(visit,row))
                dfs(visit,n,row+1,ans);
        }
    }
    vector<vector<string> > solveNQueens(int n) {
        vector<vector<string> > ans;
        vector<int> visit(n,0);
        dfs(visit,n,0,ans);
        return ans;
    }
};


 