/**
 * @param {string[]} strs
 * @return {string}
 */
var longestCommonPrefix = function (strs) {
    let prefix = '';
    for (let i = 0; strs.length > 0; prefix += strs[0][i], i++) {
        for (let j = 0; j < strs.length; j++) {
            if (i >= strs[j].length || (j > 0 && strs[j][i] !== strs[j - 1][i])) {
                return prefix;
            }
        }
    }
    return prefix;
};