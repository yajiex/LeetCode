class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int, int> mp;
        int ans = 0;
        int sum = 0;
        mp[0] = -1;
        for(int i=0;i<nums.size();i++) {
            sum += nums[i] ? 1 : -1;
            if (mp.find(sum) != mp.end()) {
                ans = max(i - mp[sum], ans);
            } else {
                mp[sum] = i;
            }
        }
        return ans;
    }
};