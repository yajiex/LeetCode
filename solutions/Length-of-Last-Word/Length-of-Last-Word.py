

class Solution:
    # @param s, a string
    # @return an integer
    def lengthOfLastWord(self, s):
        if len(s)==0:
            return 0
        start=-1
        for i in range(len(s)-1,-1,-1):
            if s[i]!=' ':
                start=i;
                break;
        if start==-1:
            return 0
        end=-1
        for i in range(start-1,-1,-1):
            if s[i]==' ':
                end=i
                break
        return start-end
 