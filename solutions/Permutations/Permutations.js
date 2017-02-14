/**
 * @param {number[]} nums
 * @return {number[][]}
 */
var permute = function (nums) {
  const ans = [];
  const dfs = (vec, pos) => {
    if (pos === vec.length) {
      ans.push(vec.slice());
    }
    for (let i = pos; i < vec.length; i++) {
      [vec[pos], vec[i]] = [vec[i], vec[pos]];
      dfs(vec, pos + 1);
      [vec[i], vec[pos]] = [vec[pos], vec[i]];
    }
  };
  dfs(nums.slice(), 0);
  return ans;
};