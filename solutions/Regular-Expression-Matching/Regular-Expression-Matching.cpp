
// class Solution {
// public:
//     bool isMatch(const char *s, const char *p) {
//         if(*p=='\0')
//             return *s=='\0';
//         if(*(p+1)!='*')
//         {
//             if(*s!='\0' && (*s==*p || *p=='.'))
//                 return isMatch(s+1,p+1);
//         }
//         else
//         {
//             while(*s!='\0' && (*s==*p || *p=='.'))
//             {
//                 if(isMatch(s,p+2))
//                     return true;
//                 s++;
//             }
//             return isMatch(s,p+2);
//         }
//         return false;
//     }
// };


// 2019-07-14
// O(nm)

class Solution {
public:
    bool isMatch(string s, string p) {
        int n = s.length();
        int m = p.length();
        vector<vector<bool>> dp = vector<vector<bool>>(n + 1, vector<bool>(m + 1, false));
        dp[0][0] = true;
        for(int i=1;i<=m;i++)
        {
            if (i == 1)
            {
                dp[0][i] = false;
            }
            else
            {
                dp[0][i] = p[i-1] == '*' && dp[0][i-2];
            }
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(p[j-1] == '*')
                {
                    dp[i][j] = dp[i][j-2] || dp[i-1][j] && match(s[i-1], p[j-2]);
                }
                else
                {
                    dp[i][j] = dp[i-1][j-1] && match(s[i-1], p[j-1]);
                }
            }
        }
        return dp[n][m];
    }
private:
    bool match(char c1, char c2)
    {
        return c1 == c2 || c2 == '.';
    }
};