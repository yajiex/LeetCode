

class Solution:
    # @param board, a list of lists of 1 length string
    # @param word, a string
    # @return a boolean
    def exist(self, board, word):
        length=len(word)
        if length==0:
            return True
        n=len(board)
        if n==0:
            return False
        m=len(board[0])
        if m==0:
            return False
        dx=[0,1,0,-1]
        dy=[1,0,-1,0]
        visit=[[False for x in range(m)] for y in range(n)]
        for i in range(n):
            for j in range(m):
                if board[i][j]==word[0]:
                    visit[i][j]=True
                    if self.dfs(board,n,m,length,visit,word,i,j,1,dx,dy)==True:
                        return True
                    visit[i][j]=False
        return False
    def dfs(self,board,n,m,length,visit,word,x,y,pos,dx,dy):
        if pos==length:
            return True
        for i in range(4):
            tx=x+dx[i]
            ty=y+dy[i]
            if self.ok(tx,ty,n,m)==True and visit[tx][ty]==False and board[tx][ty]==word[pos]:
                visit[tx][ty]=True
                if self.dfs(board,n,m,length,visit,word,tx,ty,pos+1,dx,dy)==True:
                    return True
                visit[tx][ty]=False
        return False
    def ok(self,x,y,n,m):
        return x>=0 and x<n and y>=0 and y<m
 