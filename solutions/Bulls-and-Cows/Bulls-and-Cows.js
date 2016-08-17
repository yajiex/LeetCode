/**
 * @param {string} secret
 * @param {string} guess
 * @return {string}
 */
var getHint = function (secret, guess) {
  let bulls = 0;
  let cows = 0;
  const hash = Array.from({ length: 10 }, () => 0);
  const length = secret.length;
  for (let i = 0; i < length; i++) {
    if (secret[i] === guess[i]) {
      bulls++;
    } else {
      //if prev part of guess has curr digit in secret
      //we found a pair that has same digit with different position
      if (hash[secret[i] - '0'] < 0) {
        cows++;
      }
      //if prev part of secret has curr digit in guess
      //we found a pair that has same digit with different position
      if (hash[guess[i] - '0'] > 0) {
        cows++;
      }
      hash[secret[i] - '0']++;
      hash[guess[i] - '0']--;
    }
  }
  return `${bulls}A${cows}B`;
};