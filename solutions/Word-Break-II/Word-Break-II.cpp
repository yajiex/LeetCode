
class Solution {
public:
    void wordBreakHelper(vector<vector<int> > &record,int pos,string s,string path,vector<string> &ans)
    {
        for(int i=0;i<record[pos].size();i++)
        {
            string sub=s.substr(pos,record[pos][i]-pos);
            string newpath=path+(pos==0?sub:" "+sub);
            if(record[pos][i]==s.length())
                ans.push_back(newpath);
            else
                wordBreakHelper(record,record[pos][i],s,newpath,ans);
        }
    }
    vector<string> wordBreak(string s, unordered_set<string> &dict) {
        int n=s.length();
        vector<vector<int> > record(n+1,vector<int>());
        for(int j=n;j>=0;j--)
        {
            if(j<n&&record[j].size()==0)
                continue;
            for(int i=j-1;i>=0;i--)
                if(dict.count(s.substr(i,j-i)))
                    record[i].push_back(j);
        }
        vector<string> ans;
        wordBreakHelper(record,0,s,"",ans);
        return ans;
    }
};


 