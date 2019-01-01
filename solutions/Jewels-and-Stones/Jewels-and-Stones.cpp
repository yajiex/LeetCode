class Solution {
public:
    int numJewelsInStones(string J, string S) {
        vector<bool> visit(52, false);
        for(int i=0;i<J.length();i++)
        {
            visit[J[i] - 'A'] = true;
        }
        int ans = 0;
        for(int i=0;i<S.length();i++)
        {
            if(visit[S[i]-'A'])
            {
                ans++;
            }
        }
        return ans;
    }
};