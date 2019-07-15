
// class Solution {
// public:
//     bool isValid(string s) {
//         stack<char> st;
//         for(int i=0;i<s.length();i++)
//         {
//             if(s[i]=='(' || s[i]=='{' || s[i]=='[')
//                 st.push(s[i]);
//             else if(st.empty())
//                 return false;
//             else
//             {
//                 char ch=st.top();
//                 st.pop();
//                 if(ch=='('&&s[i]==')' || ch=='['&&s[i]==']' || ch=='{'&&s[i]=='}')
//                     continue;
//                 else
//                     return false;
//             }
//         }
//         return st.empty();
//     }
// };

// 2019-07-15
// O(n)
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i=0;i<s.length();i++)
        {
            if(s[i] == '(' || s[i] == '[' || s[i] == '{')
            {
                st.push(s[i]);
            }
            else
            {
                if(st.size() == 0)
                {
                    return false;
                }
                char c = st.top();
                st.pop();
                if (s[i] == ')' && c == '(' || s[i] == ']' && c == '[' || s[i] == '}' && c == '{')
                {
                    continue;
                }
                else
                {
                    return false;
                }
            }
        }
        return st.size() == 0;
    }
};
 