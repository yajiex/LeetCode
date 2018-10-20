class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> mp(26, 0);
        for(int i=0;i<tasks.size();i++)
        {
            mp[tasks[i] - 'A']++;
        }
        
        int maxC = *max_element(mp.begin(), mp.end());
        int cnt = 1;
        for(int i=0;i<mp.size();i++)
        {
            if (mp[i] == maxC)
            {
                cnt++;
            }
        }
        
        return max(int(tasks.size()), (maxC - 1) * (n + 1) - 1 + cnt);
    }
};