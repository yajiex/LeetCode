/**
 * @param {number[]} nums
 * @return {number}
 */
var rob = function (nums) {
  let pre = 0;
  let cur = 0;
  nums.forEach((num) => {
    const temp = Math.max(cur, pre + num);
    pre = cur;
    cur = temp;
  });
  return cur;
};