class Solution {
public:
/*
Because dp[i] = dp[i] || dp[i-num] uses smaller index value dp[i-num].
When the current iteration begins, the values in dp[] are the result of previous iteration.
Current iteration's result should only depend on the values of previous iteration.
If you iterate from i = 0, then dp[i-num] will be overwritten before you use it, which is wrong.
You can avoid this problem by iterating from i=sum
*/
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        for(int i=0;i<nums.size();i++)
        {
            sum += nums[i];
        }
        
        if (sum % 2 == 1)
        {
            return false;
        }
        
        sum /= 2;
        
        vector<bool> dp(sum+1, false);
        dp[0] = true;
        
        for(int i=0;i<nums.size();i++)
        {
            for(int j=sum;j>=nums[i];j--)
            {
                dp[j] = dp[j] || dp[j-nums[i]];
            }
        }
        
        return dp[sum];
    }
};