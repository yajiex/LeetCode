

class Solution:
    def dfs(self,pos,n,start,ans,vec,S):
        if ans.count(vec)==0:
            temp=vec[:]
            ans.append(temp)
        if pos==n:
            return 
        for i in range(start,n):
            vec2=vec[:]
            vec2.append(S[i])
            self.dfs(pos+1,n,i+1,ans,vec2,S)
    # @param num, a list of integer
    # @return a list of lists of integer
    def subsetsWithDup(self, S):
        S.sort()
        ans=[]
        vec=[]
        self.dfs(0,len(S),0,ans,vec,S)
        return ans
 