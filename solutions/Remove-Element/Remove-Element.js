/**
 * @param {number[]} nums
 * @param {number} val
 * @return {number}
 */
var removeElement = function (nums, val) {
  let length = nums.length;
  for (let i = 0; i < length; i++) {
    if (nums[i] === val) {
      nums[i--] = nums[--length];
    }
  }
  return length;
};