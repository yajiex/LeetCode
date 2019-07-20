
// class Solution {
// public:
//     int trap(int A[], int n) {
//         int l=0;
//         int r=n-1;
//         int sum=0;
//         int del=0;
//         int curH=0;
//         while(l<=r)
//         {
//             int minH=min(A[l],A[r]);
//             if(minH>curH)
//             {
//                 sum+=(minH-curH)*(r-l+1);
//                 curH=minH;
//             }
//             if(A[l]<A[r])
//                 del+=A[l++];
//             else
//                 del+=A[r--];
//         }
//         return sum-del;
//     }
// };

// 2019-07-20
// O(n)
class Solution {
public:
    int trap(vector<int>& height) {
        int l = 0;
        int r = height.size() - 1;
        int ans = 0;
        int del = 0;
        int curHeight = 0;
        while(l <= r)
        {
            int minHeight = min(height[l], height[r]);
            if (minHeight > curHeight)
            {
                ans += (minHeight - curHeight) * (r - l + 1);
                curHeight = minHeight;
            }
            del += height[l] < height[r] ? height[l++] : height[r--];
        }
        return ans - del;
    }
};
 