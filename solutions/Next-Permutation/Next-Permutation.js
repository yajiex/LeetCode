var swap = (x, y) => {
  const temp = x;
  x = y;
  y = temp;
};

/**
 * @param {number[]} nums
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var nextPermutation = function (nums) {
  let k = -1;
  for (let i = nums.length - 2; i >= 0; i--) {
    if (nums[i] < nums[i + 1]) {
      k = i;
      break;
    }
  }
  if (k === -1) {
    nums.reverse();
    return;
  }
  let l = -1;
  for (let i = nums.length - 1; i > k; i--) {
    if (nums[i] > nums[k]) {
      l = i;
      break;
    }
  }

  [nums[k], nums[l]] = [nums[l], nums[k]];

  for (let i = k + 1; i < Math.floor((k + 1 + nums.length) / 2); i++) {
    [nums[i], nums[nums.length - 1 - (i - (k + 1))]] = [nums[nums.length - 1 - (i - (k + 1))], nums[i]];
  }
};