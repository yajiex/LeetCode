/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[][]}
 */
var fourSum = function (nums, target) {
  nums.sort((x, y) => x - y);
  const ans = [];
  const n = nums.length;
  for (let i = 0; i < n; i++) {
    if (i > 0 && nums[i] === nums[i - 1]) {
      continue;
    }
    for (let j = n - 1; j > i; j--) {
      if (j < n - 1 && nums[j] === nums[j + 1]) {
        continue;
      }
      let start = i + 1;
      let end = j - 1;
      while (start < end) {
        const sum = nums[i] + nums[start] + nums[end] + nums[j];
        if (sum < target) {
          start++;
        } else if (sum > target) {
          end--;
        } else {
          ans.push([nums[i], nums[start], nums[end], nums[j]]);
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
  }
  return ans;
};