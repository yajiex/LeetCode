
class Solution {
public:
    void dfs(int pos,string s,vector<vector<string> >&ans,vector<vector<bool> > dp,vector<int> &mark)
    {
        if(pos==s.length())
        {
            vector<string> vec;
            string str="";
            for(int i=0;i<s.length();i++)
            {
                str+=s[i];
                if(mark[i])
                {
                    vec.push_back(str);
                    str="";
                }
            }
            ans.push_back(vec);
            return ;
        }
        for(int i=pos;i<s.length();i++)
            if(dp[pos][i])
            {
                mark[i]=1;
                dfs(i+1,s,ans,dp,mark);
                mark[i]=0;
            }
    }
    vector<vector<string>> partition(string s) {
        int n=s.length();
        vector<vector<bool> > dp(n,vector<bool>(n,false));
        vector<vector<string> >ans;
        vector<int>mark(n);
        for(int j=0;j<n;j++)
            for(int i=j;i>=0;i--)
                if(s[i]==s[j] && (j-i<=1 || dp[i+1][j-1]))
                    dp[i][j]=true;
        dfs(0,s,ans,dp,mark);
        return ans;
    }
};


 