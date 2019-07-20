
// class Solution {
// public:
//     vector<string> anagrams(vector<string> &strs) {
//         map<string,int>mp;
//         vector<string>ans;
//         for(int i=0;i<strs.size();i++)
//         {
//             string temp = strs[i];
//             sort(temp.begin(),temp.end());
//             if(mp.find(temp) == mp.end())
//                 mp[temp] = i;
//             else
//             {
//                 ans.push_back(strs[i]);
//                 if(mp[temp]!=-1)
//                 {
//                     ans.push_back(strs[mp[temp]]);
//                     mp[temp]=-1;
                    
//                 }
//             }
//         }
//         return ans;
//     }
// };

// 2019-07-20
// O(nklogk)
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, int> mp;
        vector<vector<string>> ans;
        for(int i=0;i<strs.size();i++)
        {
            string tmp = strs[i];
            sort(tmp.begin(), tmp.end());
            if (mp.find(tmp) == mp.end())
            {
                vector<string> vec;
                vec.push_back(strs[i]);
                ans.push_back(vec);
                mp[tmp] = ans.size() - 1;
            }
            else
            {
                vector<string> vec = ans[mp[tmp]];
                vec.push_back(strs[i]);
                ans[mp[tmp]] = vec;
            }
        }
        return ans;
    }
};
 