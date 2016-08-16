/**
 * @param {character[][]} board
 * @return {boolean}
 */
var isValidSudoku = function (board) {
  const row = Array.from({ length: 9 }, () => 0);
  const col = Array.from(row);
  const block = Array.from(col);
  for (let i = 0; i < 9; i++) {
    for (let j = 0; j < 9; j++) {
      if (board[i][j] !== '.') {
        const index = 1 << (board[i][j] - '0');
        if (((row[i] & index) !== 0) || ((col[j] & index) !== 0) || ((block[Math.floor(i / 3) * 3 + Math.floor(j / 3)] & index) !== 0)) {
          return false;
        }
        row[i] |= index;
        col[j] |= index;
        block[Math.floor(i / 3) * 3 + Math.floor(j / 3)] |= index;
      }
    }
  }
  return true;
};