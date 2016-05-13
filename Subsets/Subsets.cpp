
class Solution {
public:
    vector<vector<int> > subsets(vector<int> &S) {
        sort(S.begin(),S.end());
        vector<vector<int> > ans(1);
        for(int i=0;i<S.size();i++)
        {
            int n=ans.size();
            for(int j=n-1;j>=0;j--)
            {
                ans.push_back(ans[j]);
                ans.back().push_back(S[i]);
            }
        }
        return ans;
    }
};


 