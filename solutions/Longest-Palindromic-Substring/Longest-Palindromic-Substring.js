const longestPalindromeHelper = (s, i, j) => {
  const n = s.length;
  while (i >= 0 && j < n && s[i] === s[j]) {
    i--;
    j++;
  }
  return j - i - 1;
};


/**
 * @param {string} s
 * @return {string}
 */
var longestPalindrome = function (s) {
  const n = s.length;
  let maxlen = 1;
  let start = 0;
  for (let i = 0; i < n; i++) {
    const len1 = longestPalindromeHelper(s, i, i);
    let len2 = 0;
    if (i + 1 < n) {
      len2 = longestPalindromeHelper(s, i, i + 1);
    }
    const curlen = Math.max(len1, len2);
    if (curlen > maxlen) {
      maxlen = curlen;
      start = maxlen % 2 ? i - Math.floor(maxlen / 2) : i - Math.floor((maxlen - 1) / 2);
    }
  }
  return s.substr(start, maxlen);
};