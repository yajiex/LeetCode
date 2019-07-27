
// class Solution {
// public:
//     bool wordBreak(string s, unordered_set<string> &dict) {
//         int len=s.length();
//         vector<bool>dp(len,false);
//         dp[0]=true;
//         for(int i=0;i<len;i++)
//             if(dp[i])
//                 for(int j=1;j<=len;j++)
//                     if(dict.count(s.substr(i,j))>0)
//                         dp[i+j]=true;
//         return dp[len];
//     }
// };

// 2019-07-27
// O(n^3)
class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> st(wordDict.begin(), wordDict.end());
        int n = s.length();
        vector<bool> dp(n+1, false);
        dp[0] = true;
        for(int i=1;i<=n;i++)
        {
            for(int j=i-1;j>=0;j--)
            {
                if(dp[j])
                {
                    if(st.find(s.substr(j, i-j)) != st.end())
                    {
                        dp[i] = true;
                        break;
                    }
                }
            }
        }
        return dp[n];
    }
};
 