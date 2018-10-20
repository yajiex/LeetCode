class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int minN = INT_MAX;
        int maxN = INT_MIN;
        bool flag = false;
        for(int i = 1; i < nums.size(); i++)
        {
            if (nums[i] < nums[i-1])
            {
                flag = true;
            }
            if (flag)
            {
                minN = min(nums[i], minN);
            }
        }
        flag = false;
        for(int i = nums.size() - 2; i >= 0; i--)
        {
            if (nums[i] > nums[i+1])
            {
                flag = true;
            }
            if (flag)
            {
                maxN = max(nums[i], maxN);
            }
        }
        
        int l = 0;
        int r = nums.size() - 1;
        for(; l < nums.size(); l++)
        {
            if (nums[l] > minN)
            {
                break;
            }
        }
        for(; r >= 0; r--)
        {
            if (nums[r] < maxN)
            {
                break;
            }
        }
        
        return max(r - l + 1, 0);
    }
};