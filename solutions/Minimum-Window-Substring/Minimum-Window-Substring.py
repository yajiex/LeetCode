

class Solution:
    # @return a string
    def minWindow(self, S, T):
        lent=len(T)
        lens=len(S)
        needToFind=[0 for x in range(256)]
        for i in range(lent):
            needToFind[ord(T[i])]+=1
        hasFound=[0 for x in range(256)]
        minBegin=0
        minEnd=0
        minWindow=lens+1
        cnt=0
        begin=0
        for end in range(lens):
            if needToFind[ord(S[end])]==0:
                continue
            ch=ord(S[end])
            hasFound[ch]+=1
            if hasFound[ch]<=needToFind[ch]:
                cnt+=1
            if cnt==lent:
                while needToFind[ord(S[begin])]==0 or hasFound[ord(S[begin])]>needToFind[ord(S[begin])]:
                    if hasFound[ord(S[begin])]>needToFind[ord(S[begin])]:
                        hasFound[ord(S[begin])]-=1
                    begin+=1
                length=end-begin+1
                if length<minWindow:
                    minWindow=length
                    minBegin=begin
                    minEnd=end
        return S[minBegin:minEnd+1] if minWindow<=lens else ""
 