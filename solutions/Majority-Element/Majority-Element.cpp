// 2019-07-28
// O(n)
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt = 0;
        int ans = 0;
        for(int i=0;i<nums.size();i++)
        {
            if(cnt == 0)
            {
                ans = nums[i];
            }
            cnt += nums[i] == ans ? 1 : -1;
        }
        return ans;
    }
};