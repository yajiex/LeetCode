
class Solution {
public:
    void dfs(vector<int> candidates,vector<vector<int> > &ans,vector<int> vec,int target,int pos)
    {
        if(target==0)
        {
            ans.push_back(vec);
            return;
        }
        for(int i=pos;i<candidates.size();i++)
        {
            if(target<candidates[i])
                return;
            vec.push_back(candidates[i]);
            dfs(candidates,ans,vec,target-candidates[i],i);
            vec.pop_back();
        }
    }
    vector<vector<int> > combinationSum(vector<int> &candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int> > ans;
        vector<int> vec;
        dfs(candidates,ans,vec,target,0);
        return ans;
    }
};


 