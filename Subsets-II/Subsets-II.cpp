
class Solution {
public:
    vector<vector<int> > subsetsWithDup(vector<int> &S) {
        sort(S.begin(),S.end());
        vector<vector<int> > ans(1);
        int last=S[0];
        int lastIndex=0;
        for(int i=0;i<S.size();i++)
        {
            int temp=lastIndex;
            if(S[i]!=last)
            {
                last=S[i];
                temp=0;
            }
            int n=ans.size();
            lastIndex=n;
            for(int j=n-1;j>=temp;j--)
            {
                ans.push_back(ans[j]);
                ans.back().push_back(S[i]);
            }
        }
        return ans;
    }
};


 