
class Solution {
public:
    int minDistance(string word1, string word2) {
        int len1=word1.length();
        int len2=word2.length();
        int **dp=new int*[len1+1];
        for(int i=0;i<=len1;i++)
            dp[i]=new int[len2+1];
        for(int i=0;i<=len1;i++)
            dp[i][0]=i;
        for(int i=0;i<=len2;i++)
            dp[0][i]=i;
        for(int i=1;i<=len1;i++)
        {
            for(int j=1;j<=len2;j++)
            {
                int ins=dp[i-1][j]+1;
                int del=dp[i][j-1]+1;
                int rep=dp[i-1][j-1]+(word1[i-1]==word2[j-1]?0:1);
                dp[i][j]=min(min(ins,del),rep);
            }
        }
        return dp[len1][len2];
    }
};


 