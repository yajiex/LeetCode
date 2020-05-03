class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        deque<int> minQ;
        deque<int> maxQ;
        int l = 0;
        int r = 0;
        int ans = 0;
        while(r < nums.size()) {
            int cur = nums[r];
            while(!maxQ.empty() && nums[maxQ.back()] <= cur) {
                maxQ.pop_back();
            }
            maxQ.push_back(r);
            while(!minQ.empty() && nums[minQ.back()] >= cur) {
                minQ.pop_back();
            }
            minQ.push_back(r);
            
            int maxIndex = maxQ.front();
            int maxNum = nums[maxIndex];
            int minIndex = minQ.front();
            int minNum = nums[minIndex];
            if(maxNum - minNum > limit) {
                l++;
                if(l>maxQ.front()) {
                    maxQ.pop_front();
                }
                if(l>minQ.front()) {
                    minQ.pop_front();
                }
            } else {
                ans = max(ans, r-l+1);
                r++;
            }
        }
        return ans;
    }
};