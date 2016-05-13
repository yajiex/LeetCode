

class Solution:
    # @param path, a string
    # @return a string
    def simplifyPath(self, path):
        s=[]
        str=""
        length=len(path)
        for i in range(length+1):
            if i==length or path[i]=='/':
                if str=="..":
                    if len(s)!=0:
                        s.pop(-1)
                elif str!='.' and str!='':
                    s.append(str)
                str=""
            else:
                str+=path[i]
        if len(s)==0:
            return "/"
        ans=""
        while len(s)!=0:
            ans="/"+s[-1]+ans
            s.pop(-1)
        return ans
 