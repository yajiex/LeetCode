class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int S) {
        int sum = 0;
        for(int i=0;i<nums.size();i++)
        {
            sum += nums[i];
        }
        
        if(sum < S || -sum > S || (sum + S) % 2 == 1)
        {
            return 0;
        }
        
        int target = (sum + S) / 2;
        vector<int> dp(target+1, 0);
        dp[0] = 1;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=target;j>=nums[i];j--)
            {
                dp[j] += dp[j-nums[i]];
            }
        }
        return dp[target];
    }
};