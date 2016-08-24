/**
 * @param {number} n
 * @return {string}
 */
var countAndSay = function (n) {
  let ans = '1';
  for (let i = 1; i < n; i++) {
    const length = ans.length;
    let cnt = 0;
    let last = ans[0];
    let temp = '';
    for (let j = 0; j <= length; j++) {
      if (ans[j] === last) {
        cnt++;
      } else {
        temp += cnt + last;
        cnt = 1;
        last = ans[j];
      }
    }
    ans = temp;
  }
  return ans;
};