
class Solution {
public:
    int cal(int x1,int x2,string op)
    {
        if(op=="+")
            return x1+x2;
        else if(op=="-")
            return x1-x2;
        else if(op=="*")
            return x1*x2;
        else if(op=="/")
            return x1/x2;
    }
    int evalRPN(vector<string> &tokens) {
        stack<int> st;
        for(int i=0;i<tokens.size();i++)
        {
            if(isdigit(tokens[i][0]) || tokens[i].length()>1)
                st.push(stoi(tokens[i]));
            else
            {
                int x2=st.top();
                st.pop();
                int x1=st.top();
                st.pop();
                st.push(cal(x1,x2,tokens[i]));
            }
        }
        return st.top();
    }
};


 