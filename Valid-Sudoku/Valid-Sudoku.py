

class Solution:
    # @param board, a 9x9 2D array
    # @return a boolean
    def isValidSudoku(self, board):
        row = [0 for i in range(9)]
        col = [0 for i in range(9)]
        for i in range(9):
            row = [0 for x in range(9)]
            col = [0 for x in range(9)]
            for j in range(9):
                if board[i][j]!='.':
                    if row[int(board[i][j])-1] == 1:
                        return False
                    else:
                        row[int(board[i][j])-1]=1
                if board[j][i]!='.':
                    if col[int(board[j][i])-1] == 1:
                        return False
                    else:
                        col[int(board[j][i])-1]=1
        grid = [0 for i in range(9)]
        for i in range(0,9,3):
            for j in range(0,9,3):
                grid = [0 for x in range(9)]
                for k in range (9):
                    if board[i+k/3][j+k%3]!='.':
                        if grid[int(board[i+k/3][j+k%3])-1] == 1:
                            return False
                        else:
                            grid[int(board[i+k/3][j+k%3])-1]=1
        return True
 