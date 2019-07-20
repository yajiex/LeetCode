
// class Solution {
// public:
//     void dfs(vector<int> candidates,vector<vector<int> > &ans,vector<int> vec,int target,int pos)
//     {
//         if(target==0)
//         {
//             ans.push_back(vec);
//             return;
//         }
//         for(int i=pos;i<candidates.size();i++)
//         {
//             if(target<candidates[i])
//                 return;
//             vec.push_back(candidates[i]);
//             dfs(candidates,ans,vec,target-candidates[i],i);
//             vec.pop_back();
//         }
//     }
//     vector<vector<int> > combinationSum(vector<int> &candidates, int target) {
//         sort(candidates.begin(),candidates.end());
//         vector<vector<int> > ans;
//         vector<int> vec;
//         dfs(candidates,ans,vec,target,0);
//         return ans;
//     }
// };

// 2019-07-20
// O(2^n)
class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> ans;
        vector<int> vec;
        dfs(candidates, vec, ans, 0, 0, target);
        return ans;
    }
private:
    void dfs(vector<int>& candidates, vector<int>& cur, vector<vector<int>>& ans, int curIndex, int curSum, int target) {
        if (curSum == target)
        {
            ans.push_back(cur);
            return;
        }
        
        for(int i=curIndex;i<candidates.size();i++)
        {
            if (candidates[i] + curSum > target)
            {
                return;
            }
            cur.push_back(candidates[i]);
            dfs(candidates, cur, ans, i, curSum + candidates[i], target);
            cur.pop_back();
        }
    }
}; 