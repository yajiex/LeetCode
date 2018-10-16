class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        if(nums.empty()) {
            return 0;
        }
        
        vector<int> dp;
        dp.push_back(nums[0]);
        
        for(int i = 0; i < nums.size(); i++) {
            int l = 0;
            int r = dp.size() - 1;
            while (l < r) {
                int m = (l + r) / 2;
                if (dp[m] < nums[i]) {
                    l = m + 1;
                } else {
                    r = m;
                }
            }
            
            if (l == dp.size() - 1 && dp[l] < nums[i]) {
                dp.push_back(nums[i]);
            } else {
                dp[l] = nums[i];
            }
        }
        
        return dp.size();
    }
};