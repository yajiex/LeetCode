
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans=0;
        int idx=-1;
        int location[256];
        memset(location,-1,sizeof(location));
        for(int i=0;i<s.length();i++)
        {
            if(location[s[i]]>idx)
                idx=location[s[i]];
            ans=max(ans,i-idx);
            location[s[i]]=i;
        }
        return ans;
    }
};


 