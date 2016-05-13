
class Solution {
public:
    int longestConsecutive(vector<int> &num) {
        map<int,int>mp;
        for(vector<int>::iterator it=num.begin();it!=num.end();it++)
            mp[*it]=1;
        int temp=1;
        int ans=1;
        for(map<int,int>::iterator it=mp.begin();it!=mp.end();it++)
            if(mp.count(it->first+1))
                temp++;
            else
            {
                ans=max(ans,temp);
                temp=1;
            }
        ans=max(ans,temp);
        return ans;
    }
};


 