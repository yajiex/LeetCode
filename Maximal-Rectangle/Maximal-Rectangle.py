

class Solution:
    # @param matrix, a list of lists of 1 length string
    # @return an integer
    def maximalRectangle(self, matrix):
        n=len(matrix)
        if n==0:
            return 0
        m=len(matrix[0])
        if m==0:
            return 0
        lines=[[0 for x in range(m)]for y in range(n)]
        for i in range(n):
            for j in range(m):
                if i==0:
                    lines[i][j]=1 if matrix[i][j]=='1' else 0
                else:
                    lines[i][j]+=lines[i-1][j]+1 if matrix[i][j]=='1' else 0
        ans = 0
        for i in range(n):
            ans=max(ans,self.maxarea(lines[i]));
        return ans
    def maxarea(self,line):
        if len(line)==0:
            return 0
        s=[]
        line.append(0)
        sum=0
        i=0
        while i<len(line):
            if len(s)==0 or line[i]>line[s[-1]]:
                s.append(i)
            else:
                temp=s[-1]
                s.pop(-1)
                sum=max(sum,line[temp]*(i if len(s)==0 else i-s[-1]-1))
                i=i-1
            i=i+1
        return sum
        
 