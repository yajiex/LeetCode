/**
 * @param {string} s
 * @return {number}
 */
var longestValidParentheses = function (s) {
  let ans = 0;
  const st = [];
  for (let i = 0; i < s.length; i++) {
    if (s[i] === ')' && st.length > 0 && s[st[st.length - 1]] === '(') {
      st.pop();
      if (st.length === 0) {
        ans = i + 1;
      } else {
        ans = Math.max(ans, i - st[st.length - 1]);
      }
    } else {
      st.push(i);
    }
  }
  return ans;
};