class Solution
{
public:
    int maxNonOverlapping(vector<int> &nums, int target)
    {
        unordered_map<int, int> dp;
        dp[0] = -1;
        int sum = 0, right = -1, cnt = 0;
        for (int i = 0; i < nums.size(); ++i)
        {
            sum += nums[i];
            auto it = dp.find(sum - target);
            if (it != end(dp))
            {
                if (right <= it->second)
                {
                    ++cnt;
                    right = i;
                }
            }
            dp[sum] = i;
        }
        return cnt;
    }
};