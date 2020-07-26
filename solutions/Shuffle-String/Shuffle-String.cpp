class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int n = s.length();
        vector<char> ans(n);
        for(int i=0;i<n;i++) {
            ans[indices[i]] = s[i];
        }
        std::string res(ans.begin(), ans.end());
        return res;
    }
};