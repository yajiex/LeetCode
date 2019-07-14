
// class Solution {
// public:
//     int maxArea(vector<int> &height) {
//         int ans=0;
//         int n=height.size();
//         int l=0;
//         int r=n-1;
//         while(l<r)
//         {
//             ans=max(ans,(r-l)*min(height[l],height[r]));
//             if(height[l]<height[r])
//                 l++;
//             else
//                 r--;
//         }
//         return ans;
//     }
// };


 // 20190714
 // O(n)
class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0;
        int r = height.size() - 1;
        int ans = 0;
        while (l < r)
        {
            ans = max(ans, (r - l) * min(height[l], height[r]));
            if (height[l] < height[r])
            {
                l++;
            }
            else
            {
                r--;
            }
        }
        return ans;
    }
};