
// class Solution {
// public:
//     void dfs(vector<string> &ans,string cur,string digits,int pos,string model[])
//     {
//         if(pos==digits.length())
//         {
//             ans.push_back(cur);
//             return ;
//         }
//         for(int i=0;i<model[digits[pos]-'0'].length();i++)
//         {
//             cur.push_back(model[digits[pos]-'0'][i]);
//             dfs(ans,cur,digits,pos+1,model);
//             cur.pop_back();
//         }
//     }
//     vector<string> letterCombinations(string digits) {
//         vector<string> ans;
//         string model[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
//         dfs(ans,"",digits,0,model);
//         return ans;
//     }
// };


// 2019-07-14
// O(3^n)
class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> table {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        vector<string> ans;
        if(digits.length() != 0)
        {
            dfs(digits, table, 0, "", ans);
        }
        return ans;
    }
private:
    void dfs(string digits, vector<string>& table, int index, string cur, vector<string>& ans) {
        if (index == digits.length())
        {
            ans.push_back(cur);
            return;
        }
        
        string s = table[digits[index] - '0'];
        for(int i=0;i<s.length();i++)
        {
            dfs(digits, table, index + 1, cur + s[i], ans);
        }
    }
};