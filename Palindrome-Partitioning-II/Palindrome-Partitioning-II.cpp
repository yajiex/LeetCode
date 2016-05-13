
class Solution {
public:
    int minCut(string s) {
        int n=s.length();
        vector<vector<bool> >ok(n,vector<bool>(n,false));
        vector<int>dp(n);
        for(int i=0;i<n;i++)
            dp[i]=i+1;
        for(int j=0;j<n;j++)
        {
            for(int i=j;i>=0;i--)
            {
                if(s[i]==s[j] && (j-i<=1 || ok[i+1][j-1]))
                {
                    ok[i][j]=true;
                    if(i>=1)
                        dp[j]=min(dp[j],dp[i-1]+1);
                    else
                        dp[j]=min(dp[j],1);
                }
            }
        }
        return dp[n-1]-1;
    }
};


 