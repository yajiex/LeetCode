
class Solution {
public:
    vector<string> anagrams(vector<string> &strs) {
        map<string,int>mp;
        vector<string>ans;
        for(int i=0;i<strs.size();i++)
        {
            string temp = strs[i];
            sort(temp.begin(),temp.end());
            if(mp.find(temp) == mp.end())
                mp[temp] = i;
            else
            {
                ans.push_back(strs[i]);
                if(mp[temp]!=-1)
                {
                    ans.push_back(strs[mp[temp]]);
                    mp[temp]=-1;
                    
                }
            }
        }
        return ans;
    }
};


 