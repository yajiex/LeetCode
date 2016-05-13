

class Solution:
    # @return a boolean
    def isScramble(self, s1, s2):
        if len(s1) != len(s2):
            return False
        if len(s1)==0:
            return True
        lens1 = len(s1)
        ans = [[[0 for x in range(lens1)] for y in range(lens1)]for z in range(lens1)]
        for i in range(lens1):
            for j in range(len(s1)):
                ans[0][i][j] = (s1[i]==s2[j])
        for k in range(2,lens1+1):
            for i in range(lens1-k,-1,-1):
                for j in range(lens1-k,-1,-1):
                    flag = False;
                    for m in range(1,k):
                        if flag==True:
                            break
                        flag= ans[m-1][i][j] and ans[k-m-1][i+m][j+m] or ans[m-1][i][j+k-m] and ans[k-m-1][i+m][j]
                    ans[k-1][i][j]=flag
        return ans[lens1-1][0][0]
 