/**
 * @param {number[]} nums
 * @return {number}
 */
var maxSubArray = function (nums) {
  let tempAns = nums[0];
  let ans = tempAns;
  for (let i = 1; i < nums.length; i++) {
    tempAns = tempAns > 0 ? tempAns + nums[i] : nums[i];
    ans = Math.max(ans, tempAns);
  }
  return ans;
};