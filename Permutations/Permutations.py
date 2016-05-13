

class Solution:
    def dfs(self,pos,num,ans,tempans):
        n=len(num)
        if pos==n:
            temp=tempans[:]
            ans.append(temp)
        for i in range(pos,n):
            num[pos],num[i]=num[i],num[pos]
            tempans.append(num[pos])
            self.dfs(pos+1,num,ans,tempans)
            tempans.pop()
            num[pos],num[i]=num[i],num[pos]
    # @param num, a list of integer
    # @return a list of lists of integers
    def permute(self, num):
        ans=[]
        tempans=[]
        self.dfs(0,num,ans,tempans)
        return ans
 