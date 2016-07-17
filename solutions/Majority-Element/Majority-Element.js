/**
 * @param {number[]} nums
 * @return {number}
 */
var majorityElement = function (nums) {
  let ans = nums[0];
  let cnt = 1;
  const length = nums.length;
  for (let i = 1; i < length; i++) {
    if (cnt === 0) {
      ans = nums[i];
    }
    cnt = nums[i] === ans ? cnt + 1 : cnt - 1;
  }
  return ans;
};