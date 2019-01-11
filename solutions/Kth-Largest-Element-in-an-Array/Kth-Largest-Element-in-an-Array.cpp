// https://leetcode.com/problems/kth-largest-element-in-an-array/discuss/60309/C%2B%2B-PartitionMax-Heappriority_queuemultiset
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int left = 0;
        int right = nums.size() - 1;
        while (true)
        {
            int p = partition(nums, left, right);
            if(p== k-1)
            {
                return nums[p];
            }
            if(p>k-1)
            {
                right = p-1;
            }
            else
            {
                left = p+1;
            }
        }
    }

    int partition(vector<int>& nums, int left, int right)
    {
        int pivot = nums[left];
        int l =left+1;
        int r = right;
        while(l<=r)
        {
            if(nums[l]<pivot && nums[r]>pivot)
            {
                swap(nums[l++], nums[r--]);
            }
            
            if (nums[l]>=pivot)
            {
                l++;
            }
            if(nums[r]<=pivot)
            {
                r--;
            }
        }
        swap(nums[left], nums[r]);
        return r;
    }
};