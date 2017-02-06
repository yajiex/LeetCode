/**
 * @param {number[]} candidates
 * @param {number} target
 * @return {number[][]}
 */
var combinationSum2 = function (candidates, target) {
  candidates.sort((x, y) => x < y ? -1 : 1);
  const ans = [];
  const dfs = (tar, vec, pos) => {
    if (tar === 0) {
      ans.push(vec.slice());
      return;
    }
    let last = -1;
    for (let i = pos; i < candidates.length; i++) {
      if (candidates[i] === last) {
        continue;
      }
      if (tar < candidates[i]) {
        return;
      }
      last = candidates[i];
      vec.push(candidates[i]);
      dfs(tar - candidates[i], vec, i + 1);
      vec.pop();
    }
  };
  dfs(target, [], 0);
  return ans;
};