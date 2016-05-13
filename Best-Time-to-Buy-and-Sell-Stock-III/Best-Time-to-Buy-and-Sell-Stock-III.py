

class Solution:
    # @param prices, a list of integer
    # @return an integer
    def maxProfit(self, prices):
        size = len(prices)
        if size==0:
            return 0
        l = [0 for x in range(size)]
        r = [0 for x in range(size)]
        minv = prices[0]
        for i in range(1,size):
            minv = min(minv,prices[i])
            l[i] = max(l[i-1],prices[i]-minv)
        maxv = prices[size-1]
        for i in range(size-2,-1,-1):
            maxv = max(maxv,prices[i])
            r[i] = max(r[i+1],maxv-prices[i])
        ans = 0
        for i in range(size):
            ans = max(ans,l[i]+r[i])
        return ans
 