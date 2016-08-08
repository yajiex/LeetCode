/**
 * @param {number[]} nums
 * @return {number}
 */
var removeDuplicates = function (nums) {
  let n = nums.length;
  let ans = 1;
  for (let i = 1; i < n; i++) {
    if (nums[i] !== nums[i - 1]) {
      nums[ans++] = nums[i];
    }
  }
  return n === 0 ? 0 : ans;
};