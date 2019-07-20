
// class Solution {
// public:
//     void dfs(vector<vector<int> > &ans,vector<int> &num,int pos)
//     {
//         if(pos==num.size())
//             ans.push_back(num);
//         for(int i=pos;i<num.size();i++)
//         {
//             swap(num[pos],num[i]);
//             dfs(ans,num,pos+1);
//             swap(num[pos],num[i]);
//         }
//     }
//     vector<vector<int> > permute(vector<int> &num) {
//         vector<vector<int> >ans;
//         dfs(ans,num,0);
//         return ans;
//     }
// };

// 2019-07-20
// O(n!)
class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        dfs(nums, 0,  ans);
        return ans;
    }
private:
    void dfs(vector<int>& nums, int index, vector<vector<int>>& ans) {
        if (index == nums.size())
        {
            ans.push_back(nums);
            return;
        }
        for(int i=index;i<nums.size();i++)
        {
            swap(nums[i], nums[index]);
            dfs(nums, index + 1, ans);
            swap(nums[i], nums[index]);
        }
    }
};
 