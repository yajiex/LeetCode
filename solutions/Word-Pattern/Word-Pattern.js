/**
 * @param {string} pattern
 * @param {string} str
 * @return {boolean}
 */
var wordPattern = function (pattern, str) {
  const words = str.split(' ');
  const length = words.length;
  if (length !== pattern.length) {
    return false;
  }
  const dict = new Map();
  const used = new Map();
  for (let i = 0; i < length; i++) {
    if (typeof dict.get(words[i]) === 'undefined') {
      if (used.get(pattern[i])) {
        return false;
      } else {
        used.set(pattern[i], true);
      }
      dict.set(words[i], pattern[i]);
    } else {
      if (dict.get(words[i]) !== pattern[i]) {
        return false;
      }
    }
  }
  return true;
};