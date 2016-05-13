

class Solution:
    def dfs(self,candidates,target,pos,vec,ans):
        if target==0:
            vec2=vec[:]
            ans.append(vec2)
            return 
        for i in range(pos,len(candidates)):
            if target<candidates[i]:
                return 
            vec.append(candidates[i])
            self.dfs(candidates,target-candidates[i],i,vec,ans)
            vec.pop()
    # @param candidates, a list of integers
    # @param target, integer
    # @return a list of lists of integers
    def combinationSum(self, candidates, target):
        candidates.sort()
        vec=[]
        ans=[]
        self.dfs(candidates,target,0,vec,ans)
        return ans
 