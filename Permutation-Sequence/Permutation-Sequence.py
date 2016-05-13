
class Solution:
    # @return a string
    def getPermutation(self, n, k):
        temp=[]
        temp.append(1)
        for i in range(1,n+1):
            temp.append(temp[i-1]*i)
        ans=""
        visit=[0 for i in range(n+1)]
        for i in range(n,0,-1):
            for j in range(n,0,-1):
                if visit[j]==0:
                    cnt=0
                    for q in range(1,j):
                        if visit[q]==0:
                            cnt+=1
                    if temp[i-1]*cnt<k:
                        k-=temp[i-1]*cnt
                        ans+=str(j+int('0'))
                        visit[j]=1
                        break
        return ans
 