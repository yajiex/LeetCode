

class Solution:
    # @param matrix, a list of lists of integers
    # RETURN NOTHING, MODIFY matrix IN PLACE.
    def setZeroes(self, matrix):
        row = len(matrix)
        if row==0:
            return 
        col = len(matrix[0])
        if col==0:
            return
        isFirstRowZero = False
        isFirstColZero = False
        for i in range(row):
            if matrix[i][0]==0:
                isFirstColZero=True
                break
        for j in range(col):
            if matrix[0][j]==0:
                isFirstRowZero=True
                break
        for i in range(1,row):
            for j in range(1,col):
                if matrix[i][j]==0:
                    matrix[i][0]=0
                    matrix[0][j]=0
        for i in range(1,row):
            for j in range(1,col):
                if matrix[i][0]==0 or matrix[0][j]==0:
                    matrix[i][j]=0
        if isFirstRowZero:
            for j in range(col):
                matrix[0][j]=0
        if isFirstColZero:
            for i in range(row):
                matrix[i][0]=0
 