
class Solution:
    # @param matrix, a list of lists of integers
    # @return a list of lists of integers
    def rotate(self, matrix):
        n=len(matrix)
        start=0
        end=n-1
        width=n-1
        index=0
        while start<end:
            for i in range(start,end):
                matrix[index][i],matrix[width-i][index],matrix[width-index][width-i],matrix[i][width        -index]=matrix[width-i][index],matrix[width-index][width-i],matrix[i][width-index],matrix[index][i]
            index+=1
            start+=1
            end-=1
        return matrix
 