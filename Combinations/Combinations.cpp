
class Solution {
public:
    void dfs(vector<vector<int> > &ans,vector<int> vec,int n,int k,int pos,int start)
    {
        if(pos==k)
        {
            ans.push_back(vec);
            return ;
        }
        for(int i=start;i<=n;i++)
        {
            vec[pos]=i;
            dfs(ans,vec,n,k,pos+1,i+1);
        }
    }
    vector<vector<int> > combine(int n, int k) {
        vector<vector<int> >ans;
        vector<int>vec(k);
        dfs(ans,vec,n,k,0,1);
        return ans;
    }
};


 