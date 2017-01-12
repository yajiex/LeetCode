/**
 * @param {string} s
 * @param {string[]} words
 * @return {number[]}
 */
var findSubstring = function (s, words) {
  const ans = [];
  const n = words.length;
  if (n === 0) {
    return ans;
  }
  const len = words[0].length;
  const lens = s.length;
  if (lens === 0) {
    return ans;
  }
  const mp = new Map();
  for (let i = 0; i < n; i++) {
    mp.set(words[i], mp.has(words[i]) ? mp.get(words[i]) + 1 : 1);
  }
  const cur = new Map();
  for (let i = 0; i <= (lens - n * len); i++) {
    cur.clear();
    let j = 0;
    for (; j < n; j++) {
      const temp = s.substr(i + j * len, len);
      if (!mp.has(temp)) {
        break;
      }
      cur.set(temp, cur.has(temp) ? cur.get(temp) + 1 : 1);
      if (mp.get(temp) < cur.get(temp)) {
        break;
      }
    }
    if (j === n) {
      ans.push(i);
    }
  }
  return ans;
};