class Solution {
public:
    int countSubstrings(string s) {
        int n = s.size();
        int ans = 0;
        for(int i = 0; i < 2 * n; i++)
        {
            int l = i / 2;
            int r = l + i % 2;
            while(l >=0 && r < n && s[l] == s[r])
            {
                l--;
                r++;
                ans++;
            }
        }
        return ans;
    }
};