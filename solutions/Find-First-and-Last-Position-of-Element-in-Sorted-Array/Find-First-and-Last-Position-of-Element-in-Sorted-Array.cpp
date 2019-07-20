// 2019-07-20
// O(logn)
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        int n = nums.size();
        int l = 0;
        int r = n - 1;
        bool flag = false;
        while(l <= r)
        {
            int m = l + (r - l) / 2;
            if (nums[m] < target)
            {
                l = m + 1;
            }
            else if (nums[m] > target)
            {
                r = m - 1;
            }
            else
            {
                r = m - 1;
                flag = true;
            }
        }
        ans.push_back(flag ? l : -1);
        
        l = 0;
        r = n-1;
        flag = false;
        while(l <= r)
        {
            int m = l + (r - l) / 2;
            if (nums[m] > target)
            {
                r = m - 1;
            }
            else if (nums[m] < target)
            {
                l = m + 1;
            }
            else
            {
                l = m + 1;
                flag = true;
            }
        }
        ans.push_back(flag ? r : -1);
        return ans;
    }
};