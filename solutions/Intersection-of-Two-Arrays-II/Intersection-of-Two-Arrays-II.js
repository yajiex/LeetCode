/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number[]}
 */
var intersect = function (nums1, nums2) {
  const mapping = new Map();
  nums1.forEach((num) => {
    const temp = mapping.get(num);
    mapping.set(num, typeof temp === 'undefined' ? 1 : temp + 1);
  });
  const ans = [];
  nums2.forEach((num) => {
    const temp = mapping.get(num);
    if (typeof temp !== 'undefined') {
      ans.push(num);
      if (temp - 1 <= 0) {
        mapping.delete(num);
      } else {
        mapping.set(num, temp - 1);
      }
    }
  });

  return ans;
};