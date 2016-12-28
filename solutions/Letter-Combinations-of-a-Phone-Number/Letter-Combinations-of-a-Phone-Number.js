/**
 * @param {string} digits
 * @return {string[]}
 */
var letterCombinations = function (digits) {
    if (digits.length === 0) {
        return [];
    }
    const ans = [''];
    const charmap = ["0", "1", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"];
    const length = digits.length;
    for (let i = 0; i < length; i++) {
        const x = parseInt(digits[i]);
        while (ans[0].length === i) {
            const temp = ans.shift();
            charmap[x].split('').forEach((ch) => ans.push(temp + ch));
        }
    }
    return ans;
};