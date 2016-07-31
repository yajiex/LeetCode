/**
 * @param {string} s
 * @return {string}
 */
var reverseVowels = function (s) {
  const vowels = 'aeiouAEIOU';
  const arr = s.split('');
  for (let start = 0, end = arr.length - 1; start < end; start++, end--) {
    while (start < end && vowels.includes(arr[start]) === false) {
      start++;
    }
    while (start < end && vowels.includes(arr[end]) === false) {
      end--;
    }
    if (start < end) {
      const temp = arr[start];
      arr[start] = arr[end];
      arr[end] = temp;
    }
  }
  return arr.join('');
};