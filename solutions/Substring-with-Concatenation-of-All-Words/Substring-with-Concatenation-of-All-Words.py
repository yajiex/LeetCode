

class Solution:
    # @param S, a string
    # @param L, a list of string
    # @return a list of integer
    def findSubstring(self, S, L):
        ans=[]
        n=len(L)
        if n==0:
            return ans
        wordlen=len(L[0])
        lens=len(S)
        if lens==0:
            return ans
        dict={}
        cur={}
        for i in range(n):
            if L[i] in dict:
                dict[L[i]]+=1
            else:
                dict[L[i]]=1
        for i in range(lens-n*wordlen+1):
            cur.clear()
            j=0
            while j<n:
                temp=S[i+j*wordlen:i+j*wordlen+wordlen]
                if temp not in dict:
                    break
                if temp in cur:
                    cur[temp]+=1
                else:
                    cur[temp]=1
                if dict[temp]<cur[temp]:
                    break
                j+=1
            if j==n:
                ans.append(i)
        return ans
 