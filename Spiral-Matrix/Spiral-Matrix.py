

class Solution:
    # @param matrix, a list of lists of integers
    # @return a list of integers
    def spiralOrder(self, matrix):
        ans=[]
        n=len(matrix)
        if n==0:
            return ans
        m=len(matrix[0])
        if m==0:
            return ans
        x=0
        y=0
        while x<n and y<m:
            for i in range(y,m):
                ans.append(matrix[x][i])
            for i in range(x+1,n):
                ans.append(matrix[i][m-1])
            if n-1!=x:
                for i in range(m-2,y-1,-1):
                    ans.append(matrix[n-1][i])
            if m-1!=y:
                for i in range(n-2,x,-1):
                    ans.append(matrix[i][y])
            x=x+1
            y=y+1
            n=n-1
            m=m-1
        return ans
 