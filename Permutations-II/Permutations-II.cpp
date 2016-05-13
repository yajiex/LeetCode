
class Solution {
public:
    void dfs(int pos,vector<int>vec,vector<vector<int> >&ans,vector<int>&visit,vector<int>num)
    {
        if(pos==num.size())
        {
        //    sort(vec.begin(),vec.end());
        /*
            if(find(ans.begin(),ans.end(),vec)==ans.end())
            {
                ans.push_back(vec);
            }
            */
            ans.push_back(vec);
            return ;
        }
        for(int i=0;i<num.size();i++)
        {
            if(!visit[i])
            {
                if(i==0 || i!=0&&num[i]==num[i-1]&&visit[i-1] || i!=0&&num[i]!=num[i-1])
                {
                    visit[i]=1;
                    vec.push_back(num[i]);
                    dfs(pos+1,vec,ans,visit,num);
                    vec.pop_back();
                    visit[i]=0;
                }
            }
        }
    }
    vector<vector<int> > permuteUnique(vector<int> &num) {
        sort(num.begin(),num.end());
        vector<vector<int> >ans;
        vector<int>vec;
        vector<int>visit;
        visit.resize(num.size());
        dfs(0,vec,ans,visit,num);
        return ans;
    }
};


 