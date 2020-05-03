class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int n = nums.size();
        if(n<=1) {
            return true;
        }
        int last = 0;
        int start = 0;
        for(int i=0;i<n;i++) {
            if(nums[i] == 1) {
                start = i;
                break;
            }
        }
        for(int i=start+1;i<nums.size();i++) {
            if(nums[i] == 1) {
                if(i - last - 1 >= k) {
                    last = i;
                } else {
                    return false;
                }
            }
        }
        
        return true;
    }
};