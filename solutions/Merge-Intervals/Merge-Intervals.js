/**
 * Definition for an interval.
 * function Interval(start, end) {
 *     this.start = start;
 *     this.end = end;
 * }
 */
/**
 * @param {Interval[]} intervals
 * @return {Interval[]}
 */
var merge = function (intervals) {
  const ans = [];
  intervals.sort((x, y) => x.start < y.start ? -1 : 1);
  for (let i = 0; i < intervals.length; i++) {
    if (i === 0) {
      ans.push(intervals[i]);
    } else {
      const last = ans.length - 1;
      if (ans[last].end >= intervals[i].start) {
        ans[last].end = Math.max(ans[last].end, intervals[i].end);
      } else {
        ans.push(intervals[i]);
      }
    }
  }
  return ans;
};