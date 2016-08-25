/**
 * @param {string} s
 * @return {boolean}
 */
var isValid = function (s) {
  const st = [];
  const length = s.length;
  for (let i = 0; i < length; i++) {
    if (s[i] === '(' || s[i] === '{' || s[i] === '[') {
      st.push(s[i]);
    } else if (st.length === 0) {
      return false;
    } else {
      const top = st.pop();
      if (top === '(' && s[i] === ')' || top === '[' && s[i] === ']' || top === '{' && s[i] === '}') {
        continue;
      } else {
        return false;
      }
    }
  }
  return st.length === 0;
};