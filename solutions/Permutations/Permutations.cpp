
class Solution {
public:
    void dfs(vector<vector<int> > &ans,vector<int> &num,int pos)
    {
        if(pos==num.size())
            ans.push_back(num);
        for(int i=pos;i<num.size();i++)
        {
            swap(num[pos],num[i]);
            dfs(ans,num,pos+1);
            swap(num[pos],num[i]);
        }
    }
    vector<vector<int> > permute(vector<int> &num) {
        vector<vector<int> >ans;
        dfs(ans,num,0);
        return ans;
    }
};


 