

class Solution:
    # @param haystack, a string
    # @param needle, a string
    # @return a string or None
    def strStr(self, haystack, needle):
        if len(needle)==0:
            return haystack
        for i in range(len(haystack)-len(needle)+1):
            flag=True
            for j in range(len(needle)):
                if needle[j]!=haystack[i+j]:
                    flag=False
                    break
            if flag:
                return haystack[i:]
        return None
 