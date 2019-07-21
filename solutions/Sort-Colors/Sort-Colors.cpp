
// class Solution {
// public:
//     void sortColors(int A[], int n) {
//         int p0=0;
//         int p1=0;
//         int p2=n-1;
//         while(p1<=p2)
//             if(A[p1]==0)
//             {
//                 swap(A[p0],A[p1]);
//                 p0++;
//                 p1++;
//             }
//             else if(A[p1]==1)
//                 p1++;
//             else
//             {
//                 swap(A[p1],A[p2]);
//                 p2--;
//             }
//     }
// };

// 2019-07-21
// O(n)
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero = 0;
        int two = nums.size() - 1;
        for(int i=0;i<nums.size();i++)
        {
            while(i<=two && nums[i] == 2)
            {
                swap(nums[i], nums[two--]);
            }
            while(i>=zero && nums[i] == 0)
            {
                swap(nums[i], nums[zero++]);
            }
        }
    }
};
 