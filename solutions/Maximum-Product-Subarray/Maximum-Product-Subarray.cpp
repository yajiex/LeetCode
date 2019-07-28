
// class Solution {
// public:
//     int maxProduct(int A[], int n) {
//         if(n==0)
//             return 0;
//         int ans=A[0];
//         int ansmax=A[0];
//         int ansmin=A[0];
//         for(int i=1;i<n;i++)
//         {
//             int tempmax=ansmax;
//             int tempmin=ansmin;
//             ansmax=max(max(tempmax*A[i],tempmin*A[i]),A[i]);
//             ansmin=min(min(tempmax*A[i],tempmin*A[i]),A[i]);
//             ans=max(ans,ansmax);
//         }
//         return ans;
//     }
// };

// 2019-07-28
// O(n)
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        if(n==0)
        {
            return 0;
        }
        int curMin = nums[0];
        int curMax = curMin;
        int ans = curMin;
        for(int i=1;i<n;i++)
        {
            int lastMax = curMax;
            int lastMin = curMin;
            curMax = max(max(lastMax*nums[i], lastMin*nums[i]), nums[i]);
            curMin = min(min(lastMax*nums[i], lastMin*nums[i]), nums[i]);
            ans = max(curMax, ans);
        }
        return ans;
    }
}; 