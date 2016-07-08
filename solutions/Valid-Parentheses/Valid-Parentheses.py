

class Solution:
    # @return a boolean
    def isValid(self, s):
        st=[0 for i in range(1000)]
        top=0
        for i in range(len(s)):
            if s[i]=='(' or s[i]=='[' or s[i]=='{':
                st[top]=s[i]
                top+=1
            else:
                if top==0:
                    return False
                top-=1
                temp=st[top]
                if s[i]==')' and temp=='(' or s[i]==']' and temp=='[' or s[i]=='}' and temp=='{':
                    continue
                else:
                    return False
        if top!=0:
            return False
        else:
            return True
 