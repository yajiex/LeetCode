
// class Solution {
// public:
//     bool canJump(int A[], int n) {
//         int ans=0;
//         for(int i=0;i<n;i++)
//         {
//             if(i>ans)
//             {
//                 return false;
//             }
//             ans=max(ans,i+A[i]);
//             if(ans>=n-1)
//             {
//                 return true;
//             }
//         }
//         return ans>=n-1;
//     }
// };

// 2019-07-21
// O(n)
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int ans = 0;
        for(int i=0;i<nums.size();i++)
        {
            if (ans < i)
            {
                return false;
            }
            ans = max(ans, i + nums[i]);
            if (ans >= nums.size() - 1)
            {
                break;
            }
        }
        
        return ans >= nums.size() - 1;
    }
};
 