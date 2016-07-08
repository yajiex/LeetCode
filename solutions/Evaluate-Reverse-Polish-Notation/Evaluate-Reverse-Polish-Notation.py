
class Solution:
    # @param tokens, a list of string
    # @return an integer
    def cal(self,x1,x2,op):
        if op=="+":
            return x1+x2
        elif op=="-":
            return x1-x2
        elif op=="*":
            return x1*x2
        elif op=="/":
            if x1*x2<0:
                return -(abs(x1)/abs(x2))
            else:
                return abs(x1)/abs(x2)
        else:
            return 100
    def evalRPN(self, tokens):
        st=[] 
        for i in range(len(tokens)):
            if tokens[i].isdigit() or len(tokens[i])>1:
                st.append(int(tokens[i]))
            else:
                x2=st.pop()
                x1=st.pop()
                st.append(self.cal(x1,x2,tokens[i]))
        return st[0]
 