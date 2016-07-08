

class Solution:
    # @param s, a string
    # @param dict, a set of string
    # @return a list of strings
    def wordBreak(self, s, dict):
        length=len(s)
        record=[[] for x in range(length+1)]
        dp=[False for x in range(length+1)]
        dp[0]=True
        for i in range(1,length+1):
            for j in range(i):
                if dp[j]==True and s[j:i] in dict:
                    record[i].append(j)
                    dp[i]=True
        return self.dfs(s,record,length)
    def dfs(self,s,record,pos):
        ans=[]
        for i in range(len(record[pos])):
            temp=[]
            ss=s[record[pos][i]:pos]
            if len(record[record[pos][i]])==0:
                ans.append(ss)
            else:
                temp=self.dfs(s,record,record[pos][i])
                for j in range(len(temp)):
                    ans.append(temp[j]+" "+ss)
        return ans
 