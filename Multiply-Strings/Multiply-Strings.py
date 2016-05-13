

class Solution:
    # @param num1, a string
    # @param num2, a string
    # @return a string
    def multiply(self, num1, num2):
        if num1=="0" or num2=="0":
            return "0"
        len1=len(num1)
        len2=len(num2)
        len3=len1+len2
        n1=[ord(num1[x])-ord('0') for x in range(len1)]
        n2=[ord(num2[x])-ord('0') for x in range(len2)]
        res=[0 for x in range(len3)]
        for i in range(len1):
            for j in range(len2):
                res[i+j+1]+=n1[i]*n2[j]
        ss=""
        for i in range(len3-1,-1,-1):
            if i>0:
                res[i-1]+=res[i]/10
            res[i]%=10
            ss=chr(res[i]+ord('0'))+ss
        ss=ss[1:] if ss[0]=='0' else ss
        return ss
 