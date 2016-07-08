

class Solution:
    # @return a string
    def longestCommonPrefix(self, strs):
        if len(strs)==0:
            return ""
        minlen=10000
        mark=0
        for i in range(len(strs)):
            if len(strs[i])<minlen:
                minlen=len(strs[i])
                mark=i
        ans=""
        for i in range(len(strs[mark])):
            for j in range(len(strs)):
                if strs[j][i]!=strs[mark][i]:
                    return ans
            ans+=strs[mark][i]
        return ans
 