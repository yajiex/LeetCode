
// class Solution {
// public:
//     vector<int> twoSum(vector<int> &numbers, int target) {
//         map<int,int> mp;
//         vector<int> ans;
//         for(int i=0;i<numbers.size();i++)
//         {
//             if(mp.find(target-numbers[i])!=mp.end())
//             {
//                 ans.push_back(mp[target-numbers[i]]);
//                 ans.push_back(i+1);
//                 return ans;
//             }
//             mp[numbers[i]]=i+1;
//         }
//         return ans;
//     }
// };

// 2019-07-13
// O(n)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int n = nums.size();
        if (n == 0)
        {
            return ans;
        }
        unordered_map<int, int> mp;
        for(int i=0;i<n;i++)
        {
            if(mp.find(target - nums[i]) != mp.end())
            {
                ans.push_back(i);
                ans.push_back(mp[target-nums[i]]);
                return ans;
            }
            mp[nums[i]] = i;
        }
        return ans;
    }
};
 