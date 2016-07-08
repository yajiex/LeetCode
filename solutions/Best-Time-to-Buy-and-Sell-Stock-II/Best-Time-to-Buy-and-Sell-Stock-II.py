

class Solution:
    # @param prices, a list of integer
    # @return an integer
    def maxProfit(self, prices):
        last=10000
        ans=0
        for i in range(len(prices)):
            if prices[i]>last:
                ans+=prices[i]-last
            last=prices[i]
        return ans
 