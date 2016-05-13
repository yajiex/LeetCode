

class Solution:
    # @param prices, a list of integer
    # @return an integer
    def maxProfit(self, prices):
        if len(prices)==0:
            return 0
        ans=0
        lastmin=prices[0]
        for i in range(1,len(prices)):
            if prices[i]>lastmin:
                ans=max(ans,prices[i]-lastmin)
            else:
                lastmin=prices[i]
        return ans
 