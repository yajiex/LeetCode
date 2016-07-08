
class Solution:
    # @param gas, a list of integers
    # @param cost, a list of integers
    # @return an integer
    def canCompleteCircuit(self, gas, cost):
        sum=0
        total=0
        start=0
        for i in range(len(gas)):
            sum+=gas[i]-cost[i]
            total+=gas[i]-cost[i]
            if sum<0:
                start=(i+1)%len(gas)
                sum=0
        if total<0:
            return -1
        else:
            return start
 