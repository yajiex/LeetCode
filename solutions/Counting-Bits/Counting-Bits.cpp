class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> ans(num+1, 0);
        for(int i=0;i<=num;i++)
        {
            ans[i] = ans[i>>1] + (i&1);
        }
        return ans;
    }
};