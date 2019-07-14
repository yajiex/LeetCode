
// class Solution {
// public:
//     vector<vector<int> > threeSum(vector<int> &num) {
//         sort(num.begin(),num.end());
//         int n=num.size();
//         vector<vector<int> > ans;
//         for(int i=0;i<n;i++)
//         {
//             if(i>0 && num[i]==num[i-1])
//                 continue;
//             int start=i+1;
//             int end=n-1;
//             while(start<end)
//             {
//                 if(start>i+1 && num[start]==num[start-1])
//                 {
//                     start++;
//                     continue;
//                 }
//                 if(end<n-1 && num[end]==num[end+1])
//                 {
//                     end--;
//                     continue;
//                 }
//                 int temp=num[i]+num[start]+num[end];
//                 if(temp<0)
//                     start++;
//                 else if(temp==0)
//                 {
//                     vector<int> vec;
//                     vec.push_back(num[i]);
//                     vec.push_back(num[start]);
//                     vec.push_back(num[end]);
//                     ans.push_back(vec);
//                     start++;
//                 }
//                 else
//                     end--;
//             }
//         }
//         return ans;
//     }
// };


// 2019-07-14
// O(n^2)
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        for(int i=0;i<nums.size();i++)
        {
            if (i > 0 && nums[i] == nums[i-1])
            {
                continue;
            }
            int l = i+1;
            int r = nums.size() - 1;
            while(l < r)
            {
                if (l > i + 1 && nums[l] == nums[l-1])
                {
                    l++;
                    continue;
                }
                if (r < nums.size() - 1 && nums[r] == nums[r+1])
                {
                    r--;
                    continue;
                }
                int sum = nums[i] + nums[l] + nums[r];
                if (sum < 0)
                {
                    l++;
                }
                else if (sum > 0)
                {
                    r--;
                }
                else
                {
                    vector<int> tmp { nums[i], nums[l], nums[r] };
                    ans.push_back(tmp);
                    l++;
                }
            }
        }
        return ans;
    }
};