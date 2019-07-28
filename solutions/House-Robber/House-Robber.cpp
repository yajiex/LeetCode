// 2019-07-28
// O(n)
class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 0)
        {
            return 0;
        }
        int ans = nums[0];
        int prev = nums[0];
        int noPrev = 0;
        for(int i=1;i<nums.size();i++)
        {
            ans = max(prev, noPrev + nums[i]);
            noPrev = prev;
            prev = ans;
        }
        return ans;
    }
};