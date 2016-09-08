/**
 * @param {string} s
 * @return {number}
 */
var calculate = function (s) {
  const length = s.length;
  let ans = 0;
  let sign = '+';
  const st = [];
  let num = 0;
  for (let i = 0; i < length; i++) {
    const ch = s[i];
    if (ch >= '0' && ch <= '9') {
      if (num * 10 + (ch - '0') > Number.MAX_VALUE) {
        num = Number.MAX_VALUE;
      } else {
        num = num * 10 + (ch - '0');
      }
    }
    if (ch === '+' || ch === '-' || ch === '*' || ch === '/' || i === length - 1) {
      if (sign === '*' || sign === '/') {
        ans -= st[st.length - 1];
      }
      switch (sign) {
        case '+':
          st.push(num);
          break;
        case '-':
          st.push(-num);
          break;
        case '*':
          st.push(st.pop() * num);
          break;
        case '/':
          st.push(st[st.length - 1] > 0 ? Math.floor(st.pop() / num) : Math.ceil(st.pop() / num));
          break;
      }
      num = 0;
      sign = ch;
      ans += st[st.length - 1];
    }
  }
  return ans;
};