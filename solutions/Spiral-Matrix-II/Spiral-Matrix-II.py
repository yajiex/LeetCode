
class Solution:
    # @return a list of lists of integer
    def generateMatrix(self, n):
        ans=[[[]for i in range(n)] for j in range(n)]
        start=0
        end=n-1
        num=1
        while start<end:
            for i in range(start,end):
                ans[start][i]=num
                num+=1
            for i in range(start,end):
                ans[i][end]=num
                num+=1
            for i in range(end,start,-1):
                ans[end][i]=num
                num+=1
            for i in range(end,start,-1):
                ans[i][start]=num
                num+=1
            start+=1
            end-=1
        if start==end:
            ans[start][start]=num
        return ans
 