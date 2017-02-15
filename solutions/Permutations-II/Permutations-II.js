/**
 * @param {number[]} nums
 * @return {number[][]}
 */
var permuteUnique = function (nums) {
  nums.sort((x, y) => x < y ? -1 : 1);
  const ans = [];
  const dfs = (vec, pos) => {
    if (pos === vec.length) {
      ans.push(vec.slice());
      return;
    }
    for (let i = pos; i < vec.length; i++) {
      if ((pos !== i) && (vec[i] === vec[pos])) {
        continue;
      }
      [vec[i], vec[pos]] = [vec[pos], vec[i]];
      // Passing value and not swapping back ensures it's sorted
      dfs(vec.slice(), pos + 1);
    }
  };
  dfs(nums, 0);
  return ans;
};