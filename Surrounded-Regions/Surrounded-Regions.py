

class Solution:
    # @param board, a 2D array
    # Capture all regions by modifying the input board in-place.
    # Do not return any value.
    def solve(self, board):
        n=len(board)
        if n==0:
            return
        m=len(board[0])
        if m==0:
            return
        for i in range(n):
            if board[i][0]=='O':
                self.bfs(board,i,0)
            if board[i][m-1]=='O':
                self.bfs(board,i,m-1)
        for j in range(m):
            if board[0][j]=='O':
                self.bfs(board,0,j)
            if board[n-1][j]=='O':
                self.bfs(board,n-1,j)
        for i in range(n):
            for j in range(m):
                if board[i][j]=='O':
                    board[i][j]='X'
                elif board[i][j]=='A':
                    board[i][j]='O'
    def bfs(self,board,x,y):
        dx = []
        dx = [0,1,0,-1]
        dy = []
        dy = [1,0,-1,0]
        n=len(board)
        m=len(board[0])
        qx = collections.deque()
        qy = collections.deque()
        qx.append(x)
        qy.append(y)
        board[x][y]='A'
        while qx:
            xx=qx.popleft()
            yy=qy.popleft()
            for i in range(4):
                tx=xx+dx[i]
                ty=yy+dy[i]
                if self.ok(tx,ty,n,m) and board[tx][ty]=='O':
                    qx.append(tx)
                    qy.append(ty)
                    board[tx][ty]='A'
    def ok(self,x,y,n,m):
        return x>=0 and x<n and y>=0 and y<m
 