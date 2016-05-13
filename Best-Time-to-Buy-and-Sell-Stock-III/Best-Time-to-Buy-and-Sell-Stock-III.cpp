
class Solution {
public:
    int maxProfit(vector<int> &prices) {
        int n=prices.size();
        int ans=0;
        if(n==0)
            return ans;
        vector<int> l(n,0);
        vector<int> r(n,0);
        int lastmin=prices[0];
        for(int i=1;i<n;i++)
        {
            lastmin=min(lastmin,prices[i]);
            l[i]=max(l[i-1],prices[i]-lastmin);
        }
        int lastmax=prices[n-1];
        for(int i=n-2;i>=0;i--)
        {
            lastmax=max(lastmax,prices[i]);
            r[i]=max(r[i+1],lastmax-prices[i]);
            ans=max(ans,l[i]+r[i]);
        }
        return ans;
    }
};


 