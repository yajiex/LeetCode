/**
 * @param {string[]} strs
 * @return {string[][]}
 */
var groupAnagrams = function (strs) {
  strs.sort();
  const mp = new Map();
  for (let i = 0; i < strs.length; i++) {
    const key = strs[i].split('').sort().join('');
    if (!mp.has(key)) {
      mp.set(key, []);
    }
    mp.set(key, [...mp.get(key), strs[i]]);
  }
  return Array.from(mp.values());
};