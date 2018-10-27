class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n = s.size();
        int m = p.size();
        vector<int> ans;
        for(int i=0;i<=n-m;i++)
        {
            if(isAnagramHelper(s, i, p))
            {
                ans.push_back(i);
            }
        }
        
        return ans;
    }
    
    bool isAnagramHelper(string s, int start, string p)
    {
        vector<int> visit(26, 0);
        for(int i=0;i<p.size();i++)
        {
            visit[s[i + start] - 'a']++;
            visit[p[i] - 'a']--;
        }
        
        for(int i=0;i<26;i++)
        {
            if(visit[i] != 0)
            {
                return false;
            }
        }
        
        return true;
    }
};