

# Definition for an interval.
# class Interval:
#     def __init__(self, s=0, e=0):
#         self.start = s
#         self.end = e

class Solution:
    # @param intervals, a list of Interval
    # @return a list of Interval
    def merge(self, intervals):
        if intervals==None or len(intervals)==0:
            return intervals
        n=len(intervals)
        ans=[]
        intervals = sorted(intervals,cmp=lambda x,y : cmp(x.start,y.start))
        temp = intervals[0]
        for i in range(1,n):
            if temp.end<intervals[i].start:
                ans.append(temp)
                temp=intervals[i]
            else:
                temp.end=max(temp.end,intervals[i].end)
        ans.append(temp)
        return ans
 