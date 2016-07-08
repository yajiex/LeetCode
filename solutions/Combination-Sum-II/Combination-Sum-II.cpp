
class Solution {
public:
    void dfs(vector<vector<int> > &ans,vector<int> vec,vector<int> num,int target,int pos)
    {
        if(target==0)
        {
            ans.push_back(vec);
            return ;
        }
        int last=-1;
        for(int i=pos;i<num.size();i++)
        {
            if(num[i]==last)
                continue;
            if(target<num[i])
                return;
            last=num[i];
            vec.push_back(num[i]);
            dfs(ans,vec,num,target-num[i],i+1);
            vec.pop_back();
        }
    }
    vector<vector<int> > combinationSum2(vector<int> &num, int target) {
        sort(num.begin(),num.end());
        vector<vector<int> > ans;
        vector<int> vec;
        dfs(ans,vec,num,target,0);
        return ans;
    }
};


 