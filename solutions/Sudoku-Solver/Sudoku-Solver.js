/**
 * @param {character[][]} board
 * @return {void} Do not return anything, modify board in-place instead.
 */
var solveSudoku = function (board) {
  const n = board.length;

  const ok = (x, y) => {
    for (let i = 0; i < n; i++) {
      if ((x !== i) && (board[i][y] === board[x][y])) {
        return false;
      }
    }
    for (let j = 0; j < n; j++) {
      if ((y !== j) && (board[x][j] === board[x][y])) {
        return false;
      }
    }
    const t = Math.floor(Math.sqrt(n));
    const xx = Math.floor(x / t) * t;
    const yy = Math.floor(y / t) * t;
    for (let i = xx; i < xx + t; i++) {
      for (let j = yy; j < yy + t; j++) {
        if ((x !== i) && (y !== j) && (board[i][j] === board[x][y])) {
          return false;
        }
      }
    }
    return true;
  };

  const dfs = (pos) => {
    if (pos === n * n) {
      return true;
    }
    const x = Math.floor(pos / n);
    const y = pos % n;
    if (board[x][y] === '.') {
      for (let c = 1; c <= 9; c++) {
        board[x][y] = c + '';
        if (ok(x, y) && dfs(pos + 1)) {
          return true;
        }
        board[x][y] = '.';
      }
    } else if (dfs(pos + 1)) {
      return true;
    }
    return false;
  };

  dfs(0);
};