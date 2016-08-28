/**
 * @param {number[]} nums
 * @return {number[][]}
 */
var threeSum = function (nums) {
  nums.sort((x, y) => x - y);
  const ans = [];
  const n = nums.length;
  for (let i = 0; i < n; i++) {
    if (i > 0 && nums[i] === nums[i - 1]) {
      continue;
    }
    let start = i + 1;
    let end = n - 1;
    while (start < end) {
      const sum = nums[start] + nums[end];
      if (sum + nums[i] < 0) {
        start++;
      } else if (sum + nums[i] > 0) {
        end--;
      } else {
        ans.push([nums[i], nums[start], nums[end]]);
        while (start < end && nums[start] === nums[start + 1]) {
          start++;
        }
        while (start < end && nums[end] === nums[end - 1]) {
          end--;
        }
        start++;
        end--;
      }
    }
  }
  return ans;
};