
class Solution:
    def dfs(self,pos,vec,ans,num,visit):
        if pos==len(num):
            temp=vec[:]
            ans.append(temp)
            return 
        for i in range(len(num)):
            if visit[i]==0:
                if i==0 or i!=0 and num[i]==num[i-1] and visit[i-1] or i!=0 and num[i]!=num[i-1]:
                    visit[i]=1
                    vec.append(num[i])
                    self.dfs(pos+1,vec,ans,num,visit)
                    vec.pop()
                    visit[i]=0
                    
    # @param num, a list of integer
    # @return a list of lists of integers
    def permuteUnique(self, num):
        ans=[]
        vec=[]
        visit=[0 for i in range(len(num))]
        num.sort()
        self.dfs(0,vec,ans,num,visit)
        return ans
 