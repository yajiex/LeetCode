/**
 * Definition for an interval.
 * function Interval(start, end) {
 *     this.start = start;
 *     this.end = end;
 * }
 */
/**
 * @param {Interval[]} intervals
 * @param {Interval} newInterval
 * @return {Interval[]}
 */
var insert = function (intervals, newInterval) {
  const n = intervals.length;
  let ans = [];
  for (let i = 0; i < n; i++) {
    if (newInterval.start > intervals[i].end) {
      ans.push(intervals[i]);
    } else if (newInterval.end < intervals[i].start) {
      ans.push(newInterval);
      ans = ans.concat(intervals.slice(i));
      return ans;
    } else {
      newInterval.start = Math.min(newInterval.start, intervals[i].start);
      newInterval.end = Math.max(newInterval.end, intervals[i].end);
    }
  }
  ans.push(newInterval);
  return ans;
};