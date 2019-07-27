
// class Solution {
// public:
//     int maxProfit(vector<int> &prices) {
//          int ans=0;
//          int n=prices.size();
//          if(n==0)
//             return ans;
//          int lastmin=prices[0];
//          for(int i=1;i<n;i++)
//             if(prices[i]>lastmin)
//                 ans=max(ans,prices[i]-lastmin);
//             else
//                 lastmin=min(lastmin,prices[i]);
//         return ans;
//     }
// };

// 2019-07-27
// O(n)
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0;
        int low = INT_MAX;
        for(int i=0;i<prices.size();i++)
        {
            low = min(low, prices[i]);
            ans = max(ans, prices[i] - low);
        }
        return ans;
    }
};
 