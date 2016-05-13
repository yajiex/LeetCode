

class Solution:
    # @return a boolean
    def isMatch(self, s, p):
        lens = len(s)
        lenp = len(p)
        if lens==0 and lenp==0:
            return True
        if lenp==0:
            return False
        res=[[False for x in range(lenp+1)] for y in range(lens+1)]
        res[0][0]=True
        for i in range(lens+1):
            prechar='\0'
            preidex=0
            for j in range(1,lenp+1):
                if i>=1 and (p[j-1]=='.' or s[i-1]==p[j-1]):
                    res[i][j]=res[i-1][j-1]
                elif p[j-1]=='*':
                    if i>=1 and (prechar==s[i-1] or prechar=='.'):
                        res[i][j]=res[i-1][j] or res[i][j-1]
                    res[i][j]=res[i][j] or res[i][preidx]
                if p[j-1]!='*':
                    prechar=p[j-1]
                    preidx=j-1
        return res[lens][lenp]
 