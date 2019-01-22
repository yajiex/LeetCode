class Solution
{
  public:
    bool increasingTriplet(vector<int> &nums)
    {
        int left = INT_MAX;
        int middle = INT_MAX;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] <= left)
            {
                left = nums[i];
            }
            else if (nums[i] <= middle)
            {
                middle = nums[i];
            }
            else
            {
                return true;
            }
        }
        return false;
    }
};