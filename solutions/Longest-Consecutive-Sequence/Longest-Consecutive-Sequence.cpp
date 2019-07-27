
// class Solution {
// public:
//     int longestConsecutive(vector<int> &num) {
//         map<int,int>mp;
//         for(vector<int>::iterator it=num.begin();it!=num.end();it++)
//             mp[*it]=1;
//         int temp=1;
//         int ans=1;
//         for(map<int,int>::iterator it=mp.begin();it!=mp.end();it++)
//             if(mp.count(it->first+1))
//                 temp++;
//             else
//             {
//                 ans=max(ans,temp);
//                 temp=1;
//             }
//         ans=max(ans,temp);
//         return ans;
//     }
// };

// 2019-07-27
// O(n)
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end());
        unordered_set<int> visited;
        int ans = 0;
        for (int num: nums) 
        {
            if (visited.find(num) != visited.end()) 
            {
                continue;
            }
            visited.insert(num);
            int l = num - 1;
            int r = num + 1;
            while (st.find(l) != st.end()) 
            {
                visited.insert(l--);
            }
            while (st.find(r) != st.end())
            {
                visited.insert(r++);
            }
            ans = max(ans, r - l - 1);
        }
        return ans;
    }
};
 