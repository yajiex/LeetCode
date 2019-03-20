class Solution {
public:
    vector<string> letterCasePermutation(string S) {
        vector<string> ans;
        dfs(0, ans, S);
        return ans;
    }
    
private:
    void dfs(int index, vector<string> &vec, string S)
    {
        if (index == S.length())
        {
            vec.push_back(S);
            return;
        }
        dfs(index+1, vec, S);
        if(isalpha(S[index]))
        {
            if (S[index] >= 'A' && S[index] <= 'Z')
            {
                S[index] = 'a' + (S[index] - 'A');
            }
            else
            {
                S[index] = 'A' + (S[index] - 'a');
            }
            dfs(index+1, vec, S);
        }
        
    }
};