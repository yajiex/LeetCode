/**
 * @param {string[]} words
 * @param {number} maxWidth
 * @return {string[]}
 */
var fullJustify = function (words, maxWidth) {
  const ans = [];
  for (let i = 0, k, l; i < words.length; i += k) {
    for (k = 0, l = 0; i + k < words.length && l + words[i + k].length <= maxWidth - k; k++) {
      l += words[i + k].length;
    }
    let tmp = words[i];
    for (let j = 0; j < k - 1; j++) {
      if (i + k >= words.length) {
        tmp += ' ';
      } else {
        tmp += ' '.repeat(Math.floor((maxWidth - l ) / (k - 1)) + (j < (maxWidth - l) % (k - 1)));
      }
      tmp += words[i + j + 1];
    }
    tmp += ' '.repeat(maxWidth - tmp.length);
    ans.push(tmp);
  }
  return ans;
};