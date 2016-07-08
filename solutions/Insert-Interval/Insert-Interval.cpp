
/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
class Solution {
/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
class Solution {
public:
    vector<Interval> insert(vector<Interval> &intervals, Interval newInterval) {
        vector<Interval> ans;
        int size=intervals.size();
        for(int i=0;i<size;i++)
            if(newInterval.start>intervals[i].end)
                ans.push_back(intervals[i]);
            else if(newInterval.end<intervals[i].start)
            {
                ans.push_back(newInterval);
                ans.insert(ans.end(),intervals.begin()+i,intervals.end());
                return ans;
            }
            else
            {
                newInterval.start=min(newInterval.start,intervals[i].start);
                newInterval.end=max(newInterval.end,intervals[i].end);
            }
        ans.push_back(newInterval);
        return ans;
    }
};


 