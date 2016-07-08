/**
 * @param {string} s
 * @return {string}
 */
var reverseString = function (s) {
//  return s.split('').reverse().join('');
  const ans = [];
  const length = s.length;
  for (let i = 0; i < length; i++) {
    ans.push(s[length - i - 1]);
  }
  return ans.join('');
};