
// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) {
//         int ans=0;
//         int idx=-1;
//         int location[256];
//         memset(location,-1,sizeof(location));
//         for(int i=0;i<s.length();i++)
//         {
//             if(location[s[i]]>idx)
//                 idx=location[s[i]];
//             ans=max(ans,i-idx);
//             location[s[i]]=i;
//         }
//         return ans;
//     }
// };

// 2019-07-13
// O(n)
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        if (n == 0)
        {
            return 0;
        }
        int start = -1;
        int ans = 0;
        unordered_map<char, int> mp;
        for(int i=0;i<n;i++)
        {
            if(mp.find(s[i]) != mp.end())
            {
                start = max(mp[s[i]], start);
            }
            ans = max(ans, i - start);
            mp[s[i]] = i;
        }
        return ans;
    }
};
