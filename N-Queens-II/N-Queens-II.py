

class Solution:
    def isok(self,pos,queen):
        for i in range(pos):
            if queen[i]==queen[pos]:
                return False
            if abs(i-pos)==abs(queen[i]-queen[pos]):
                return False
        return True
    def dfs(self,pos,n,queen,ans):
        if pos==n:
            ans[0]=ans[0]+1
            return 
        for i in range(n):
            queen[pos]=i
            if self.isok(pos,queen):
                self.dfs(pos+1,n,queen,ans)
    
    # @return an integer
    def totalNQueens(self, n):
        queen=[0 for i in range(15)]
        ans=[0]
        self.dfs(0,n,queen,ans)
        return ans[0]
 