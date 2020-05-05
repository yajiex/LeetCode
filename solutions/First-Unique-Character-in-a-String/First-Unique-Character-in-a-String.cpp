// class Solution {
// public:
//     int firstUniqChar(string s) {
//         vector<int> ans(26, 0);
//         int n = s.length();
//         for(int i=0;i<n;i++)
//         {
//             ans[s[i]-'a']++;
//         }
//         for(int i=0;i<n;i++)
//         {
//             if(ans[s[i]-'a']==1)
//             {
//                 return i;
//             }
//         }
//         return -1;
//     }
// };

// 2020-05-05
class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> visited(26, 0);
        for(int i=0;i<s.length();i++) {
            visited[s[i] - 'a']++;
        }
        for(int i=0;i<s.length();i++) {
            if(visited[s[i] - 'a'] == 1) {
                return i;
            }
        }
        return -1;
    }
};