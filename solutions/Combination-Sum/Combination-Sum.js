/**
 * @param {number[]} candidates
 * @param {number} target
 * @return {number[][]}
 */
var combinationSum = function (candidates, target) {
  candidates.sort((x, y) => x < y ? -1 : 1);
  const ans = [];
  const dfs = (vec, tar, pos) => {
    if (tar === 0) {
      ans.push(vec.slice());
      return;
    }
    for (let i = pos; i < candidates.length; i++) {
      if (tar < candidates[i]) {
        return;
      }
      vec.push(candidates[i]);
      dfs(vec, tar - candidates[i], i);
      vec.pop();
    }
  };
  dfs([], target, 0);
  return ans;
};