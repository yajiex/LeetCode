class Solution {
public:
    int maxDotProduct(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        vector<vector<long>> dp = vector<vector<long>>(n+1, vector<long>(m+1, INT_MIN));
        long ans = INT_MIN;
        for(int i=1;i<=n;i++) {
            for(int j=1;j<=m;j++) {
                if(i==1 && j==1) {
                    dp[i][j] = nums1[i-1] * nums2[j-1];
                } else {
                    long maxC = max(dp[i-1][j-1] + nums1[i-1] * nums2[j-1], max(dp[i-1][j], dp[i][j-1]));
                    dp[i][j] = max(maxC, (long)(nums1[i-1] * nums2[j-1]));
                }
                
                ans = max(ans, dp[i][j]);
            }
        }
        
        return ans;
    }
};