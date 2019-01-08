class Solution {
public:
    int numSquares(int n) {
        if(n<=0)
        {
            return 0;
        }
        
        vector<int> dp;
        dp.push_back(0);
        while(dp.size() <= n)
        {
            int m=dp.size();
            int res = INT_MAX;
            for(int i=1;i*i<=m;i++)
            {
                res=min(res,dp[m-i*i]+1);
            }
            dp.push_back(res);
        }
        return dp[n];
    }
};