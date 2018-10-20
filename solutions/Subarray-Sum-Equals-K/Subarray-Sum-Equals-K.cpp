class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int, int> mp;
        int ans = 0;
        int sum = 0;
        mp[0] = 1;
        for(int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
            if (mp.count(sum - k))
            {
                ans += mp[sum - k];
            }
            mp[sum] = (mp.count(sum) ? mp[sum] : 0) + 1;
        }
        return ans;
    }
};