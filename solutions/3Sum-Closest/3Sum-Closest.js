/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number}
 */
var threeSumClosest = function (nums, target) {
  nums.sort((x, y) => x - y);
  const n = nums.length;
  let ans = 0;
  let first = true;
  for (let i = 0; i < n; i++) {
    let start = i + 1;
    let end = n - 1;
    while (start < end) {
      const sum = nums[start] + nums[end] + nums[i];
      if (sum < target) {
        start++;
      } else if (sum > target) {
        end--;
      } else {
        return sum;
      }
      if (first || Math.abs(sum - target) < Math.abs(ans - target)) {
        ans = sum;
        first = false;
      }
    }
  }
  return ans;
};