

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
            vec=[]
            for i in range(n):
                s=""
                for j in range(n):
                    if queen[i]==j:
                        s+='Q'
                    else:
                        s+='.'
                vec.append(s)
            ans.append(vec)
            return 
        for i in range(n):
            queen[pos]=i
            if self.isok(pos,queen):
                self.dfs(pos+1,n,queen,ans)
    # @return a list of lists of string
    def solveNQueens(self, n):
        queen=[0 for i in range(15)]
        ans=[]
        self.dfs(0,n,queen,ans)
        return ans
 