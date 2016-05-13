
class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        stack<string> st;
        st.push("(");
        stack<int> num;
        num.push(0);
        while(!st.empty())
        {
            string str=st.top();
            st.pop();
            int temp=num.top();
            num.pop();
            if(str.length()==n*2)
            {
                ans.push_back(str);
                continue;
            }
            if(str.length()-temp<n)
            {
                st.push(str+"(");
                num.push(temp);
            }
            if(str.length()>temp*2)
            {
                st.push(str+")");
                num.push(temp+1);
            }
        }
        return ans;
    }
};


 