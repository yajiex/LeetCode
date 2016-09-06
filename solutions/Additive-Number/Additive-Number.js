var add = (n, m) => {
  let ans = '';
  let i = n.length - 1;
  let j = m.length - 1;
  let flag = 0;
  while (i >= 0 || j >= 0) {
    const sum = flag + (i >= 0 ? (n[i--] - '0') : 0) + (j >= 0 ? (m[j--] - '0') : 0);
    ans = sum % 10 + ans;
    flag = Math.floor(sum / 10);
  }
  if (flag) {
    ans = flag + ans;
  }
  return ans;
};


var check = (num1, num2, num) => {
  if ((num1.length > 1 && num1[0] === '0') || (num2.length > 1 && num2[0] === '0')) {
    return false;
  }
  const sum = add(num1, num2);
  if (num === sum) {
    return true;
  }
  if (num.length <= sum.length || sum !== num.substr(0, sum.length)) {
    return false;
  }
  return check(num2, sum, num.substr(sum.length));
};

/**
 * @param {string} num
 * @return {boolean}
 */
var isAdditiveNumber = function (num) {
  const length = num.length;
  for (let i = 1; i <= Math.floor(length / 2); i++) {
    for (let j = 1; j <= Math.floor((length - i) / 2); j++) {
      if (check(num.substr(0, i), num.substr(i, j), num.substr(i + j))) {
        return true;

      }
    }
  }
  return false;
};