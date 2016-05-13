
class Solution {
public:
    bool wordBreak(string s, unordered_set<string> &dict) {
        int len=s.length();
        vector<bool>dp(len,false);
        dp[0]=true;
        for(int i=0;i<len;i++)
            if(dp[i])
                for(int j=1;j<=len;j++)
                    if(dict.count(s.substr(i,j))>0)
                        dp[i+j]=true;
        return dp[len];
    }
};


 