

class Solution:
    # @param board, a 9x9 2D array
    # Solve the Sudoku by modifying the input board in-place.
    # Do not return any value.
    def solveSudoku(self, board):
        self.dfs(board)
    def dfs(self,board):
        for i in range(9):
            for j in range(9):
                if board[i][j]=='.':
                    for k in range(1,10):
                        board[i][j]=chr(ord('0')+k)
                        if self.ok(board,i,j) and self.dfs(board):
                            return True
                        board[i][j]='.'
                    return False
        return True
    def ok(self,board,x,y):
        for i in range(9):
            if i!=x and board[i][y]==board[x][y]:
                return False
        for j in range(9):
            if j!=y and board[x][j]==board[x][y]:
                return False
        for i in range(x/3*3,x/3*3+3):
            for j in range(y/3*3,y/3*3+3):
                if i!=x and j!=y and board[i][j]==board[x][y]:
                    return False
        return True
        
 