
// class Solution {
// public:
//     int numTrees(int n) {
//         if(n==0)
//             return 1;
//         else if(n==1)
//             return 1;
//         else if(n==2)
//             return 2;
//         else
//         {
//             int ans=0;
//             for(int i=0;i<n;i++)
//                 ans+=numTrees(i)*numTrees(n-i-1);
//             return ans;
//         }
//     }
// };

// Preview - 20190726
// O(n^2)
class Solution {
public:
    int numTrees(int n) {
        if(n<=1)
        {
            return 1;
        }
        vector<int> dp(n+1, 0);
        dp[0] = 1;
        dp[1] = 1;
        for(int i=2;i<=n;i++)
        {
            for(int j=0;j<i;j++)
            {
                dp[i] += dp[j] * dp[i-j-1];
            }
        }
        return dp[n];
    }
};
 