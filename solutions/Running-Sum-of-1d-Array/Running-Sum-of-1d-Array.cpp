class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans = vector<int>(n, 0);
        for(int i=0;i<n;i++) {
            if(i > 0) {
                ans[i] = ans[i-1] + nums[i];
            } else {
                ans[i] = nums[i];
            }
        }
        return ans;
    }
};