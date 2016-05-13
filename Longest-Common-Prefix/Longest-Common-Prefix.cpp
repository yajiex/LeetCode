
class Solution {
public:
    string longestCommonPrefix(vector<string> &strs) {
        if(strs.size()==0)
            return "";
        int minlen=INT_MAX;
        string mark="";
        for(int i=0;i<strs.size();i++)
            if(strs[i].length()<minlen)
            {
                mark=strs[i];
                minlen=strs[i].length();
            }
        string ans="";
        for(int i=0;i<mark.length();i++)
        {
            for(int j=0;j<strs.size();j++)
                if(strs[j][i]!=mark[i])
                    return ans;
            ans+=mark[i];
        }
        return ans;
    }
};


 