
// class Solution {
// public:
//     int climbStairs(int n) {
//         if(n==1)
//             return 1;
//         int a=1,b=1,ans=0;
//         for(int i=2;i<=n;i++)
//         {
//             ans=a+b;
//             a=b;
//             b=ans;
//         }
//         return ans;
//     }
// };

// 2019-07-21
// O(n)
class Solution {
public:
    int climbStairs(int n) {
        if(n==0)
        {
            return 0;
        }
        if (n==1)
        {
            return 1;
        }
        if(n==2)
        {
            return 2;
        }
        
        int slow = 1;
        int fast = 2;
        int ans = 0;
        for(int i=3;i<=n;i++)
        {
            ans = slow + fast;
            slow = fast;
            fast = ans;
        }
        return ans;
    }
};
 