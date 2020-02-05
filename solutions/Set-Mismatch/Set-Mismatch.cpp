class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> ans{2, 0};
        for(int i=0;i<nums.size();i++) {
            // the index we should to put abs(nums[i])
            int index = abs(nums[i]) - 1;
            // if that position is already taken, i.e. negative
            // then it is duplicate
            if(nums[index] < 0) {
                ans[0] = index + 1;
            } else {
                nums[index] = -nums[index];
            }
        }
        
        for(int i=0;i<nums.size();i++) {
            // index i is not put, then i + 1 missing
            if (nums[i] > 0) {
                ans[1] = i+1;
            }
        }
        
        return ans;
    }
};