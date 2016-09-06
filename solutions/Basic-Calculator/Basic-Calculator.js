/**
 * @param {string} s
 * @return {number}
 */
var calculate = function (s) {
  const length = s.length;
  let sign = 1;
  let ans = 0;
  const st = [];
  for (let i = 0; i < length; i++) {
    if (s[i] >= '0' && s[i] <= '9') {
      let sum = s[i] - '0';
      while (i + 1 < length && s[i + 1] >= '0' && s[i + 1] <= '9') {
        sum = sum * 10 + (s[i + 1] - '0');
        i++;
      }
      ans += sum * sign;
    } else if (s[i] === '+') {
      sign = 1;
    } else if (s[i] === '-') {
      sign = -1;
    } else if (s[i] === '(') {
      st.push(ans);
      st.push(sign);
      ans = 0;
      sign = 1;
    } else if (s[i] === ')') {
      ans = ans * st.pop() + st.pop();
    }
  }
  return ans;
};