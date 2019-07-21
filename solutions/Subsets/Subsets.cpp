
// class Solution {
// public:
//     vector<vector<int> > subsets(vector<int> &S) {
//         sort(S.begin(),S.end());
//         vector<vector<int> > ans(1);
//         for(int i=0;i<S.size();i++)
//         {
//             int n=ans.size();
//             for(int j=n-1;j>=0;j--)
//             {
//                 ans.push_back(ans[j]);
//                 ans.back().push_back(S[i]);
//             }
//         }
//         return ans;
//     }
// };

// 2019-07-21
// O(2^n)
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> vec;
        dfs(nums, ans, 0, vec);
        return ans;
    }
private:
    void dfs(vector<int>& nums, vector<vector<int>>& ans, int index, vector<int> vec)
    {
        if (index == nums.size())
        {
            ans.push_back(vec);
            return;
        }
        dfs(nums, ans, index + 1, vec);
        vec.push_back(nums[index]);
        dfs(nums, ans, index + 1, vec);
    }
};
 