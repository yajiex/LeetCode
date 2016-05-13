
class Solution {
public:
    int numDistinct(string S, string T) {
        int n=S.length();
        int m=T.length();
        vector<int>dp(m+1);
        dp[0]=1;
        for(int i=0;i<n;i++)
            for(int j=m;j>=1;j--)
                dp[j]+=(S[i]==T[j-1]?dp[j-1]:0);
        return dp[m];
    }
};


 