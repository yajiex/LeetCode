
// class Solution {
// public:
//     int search(int A[], int n, int target) {
//         int l=0;
//         int r=n-1;
//         while(l<=r)
//         {
//             int m=l+(r-l)/2;
//             if(A[m]==target)
//                 return m;
//             else if(A[l]<A[m])
//                 if(A[l]<=target && target<A[m])
//                     r=m-1;
//                 else
//                     l=m+1;
//             else if(A[l]>A[m])
//                 if(A[m]<target && target<=A[r])
//                     l=m+1;
//                 else
//                     r=m-1;
//             else
//                 l++;
//         }
//         return -1;
//     }
// };

// 2020-04-19
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int l = 0;
        int r = n - 1;
        while(l <= r) {
            int m = l+(r-l)/2;
            if(nums[m] == target) {
                return m;
            } else if(nums[l] < nums[m]) {
                if(nums[l] <= target && nums[m] > target) {
                    r = m-1;
                } else {
                    l = m+1;
                }
            } else if(nums[l] > nums[m]) {
                if(nums[m] < target && nums[r] >= target) {
                    l = m+1;
                } else {
                    r = m-1;
                }
            } else {
                l++;
            }
        }
        return -1;
    }
};
 