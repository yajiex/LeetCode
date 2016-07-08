
class Solution {
public:
    bool isScramble(string s1, string s2) {
        int n=s1.length();
        int m=s2.length();
        if(n!=m)
            return false;
        vector<vector<vector<bool> > > dp(n,vector<vector<bool> >(n,vector<bool>(false)));
        for(int len=0;len<n;len++)
            for(int i=0;i<n-len;i++)
                for(int j=0;j<n-len;j++)
                    if(len==0)
                        dp[i][j][len]=(s1[i]==s2[j]);
                    else
                        for(int k=0;k<len;k++)
                        {
                            dp[i][j][len]=(dp[i][j][k] && dp[i+k+1][j+k+1][len-k-1]) 
                            || (dp[i][j+len-k][k] && dp[i+k+1][j][len-k-1]);
                            if(dp[i][j][len])
                                break;
                        }
        return dp[0][0][n-1];
    }
};


 