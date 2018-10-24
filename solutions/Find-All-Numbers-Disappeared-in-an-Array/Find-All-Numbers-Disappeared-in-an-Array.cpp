class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            int no = nums[i];
            if(nums[no-1] != no)
            {
                nums[i] =  nums[no-1];
                nums[no-1] = no;
                i--;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(nums[i] != i+1)
            {
                ans.push_back(i+1);
            }
        }
        
        return ans;
    }
};