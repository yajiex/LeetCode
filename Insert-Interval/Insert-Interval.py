

# Definition for an interval.
# class Interval:
#     def __init__(self, s=0, e=0):
#         self.start = s
#         self.end = e

class Solution:
    # @param intervals, a list of Intervals
    # @param newInterval, a Interval
    # @return a list of Interval
    def insert(self, intervals, newInterval):
        ans=[]
        size = len(intervals)
        for i in range(size):
            if newInterval.start>intervals[i].end:
                ans.append(intervals[i])
            elif newInterval.end<intervals[i].start:
                ans.append(newInterval)
                ans+=intervals[i:]
                return ans
            else:
                newInterval.start=min(newInterval.start,intervals[i].start)
                newInterval.end=max(newInterval.end,intervals[i].end)
        ans.append(newInterval)
        return ans
 