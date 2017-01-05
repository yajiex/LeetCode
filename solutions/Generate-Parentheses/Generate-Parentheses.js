var dfs = (list, str, open, close, max) => {
  if (str.length === max * 2) {
    list.push(str);
    return;
  }

  if (open < max) {
    dfs(list, str + "(", open + 1, close, max);
  }
  if (close < open) {
    dfs(list, str + ")", open, close + 1, max);
  }
};

/**
 * @param {number} n
 * @return {string[]}
 */
var generateParenthesis = function (n) {
  const ans = [];
  dfs(ans, "", 0, 0, n);
  return ans;
};