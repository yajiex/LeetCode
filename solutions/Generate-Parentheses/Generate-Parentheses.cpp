
// class Solution {
// public:
//     vector<string> generateParenthesis(int n) {
//         vector<string> ans;
//         stack<string> st;
//         st.push("(");
//         stack<int> num;
//         num.push(0);
//         while(!st.empty())
//         {
//             string str=st.top();
//             st.pop();
//             int temp=num.top();
//             num.pop();
//             if(str.length()==n*2)
//             {
//                 ans.push_back(str);
//                 continue;
//             }
//             if(str.length()-temp<n)
//             {
//                 st.push(str+"(");
//                 num.push(temp);
//             }
//             if(str.length()>temp*2)
//             {
//                 st.push(str+")");
//                 num.push(temp+1);
//             }
//         }
//         return ans;
//     }
// };

// 2019-07-15
// O(n)
class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        dfs(ans, 0, 0, n, "");
        return ans;
    }
private:
    void dfs(vector<string>& ans, int l, int r, int n, string cur)
    {
        if (l > n || r > n)
        {
            return;
        }
        if (l == n && r == n)
        {
            ans.push_back(cur);
            return;
        }
        
        dfs(ans, l+1, r, n, cur + "(");
        if (r < l)
        {
            dfs(ans, l, r+1, n, cur + ")");
        }
    }
};

 