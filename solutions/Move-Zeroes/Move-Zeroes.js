/**
 * @param {number[]} nums
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var moveZeroes = function (nums) {
  let nonZeroIndex = 0;
  for (let index = 0; index < nums.length; index++) {
    if (nums[index] !== 0) {
      nums[nonZeroIndex++] = nums[index];
    }
  }
  while (nonZeroIndex < nums.length) {
    nums[nonZeroIndex++] = 0;
  }
};