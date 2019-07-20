
// class Solution {
// public:
//     void nextPermutation(vector<int> &num) {
//         int n=num.size();
//         int mark=-1;
//         for(int i=n-1;i>=0;i--)
//         {
//             if(num[i]<=num[i-1])
//                 continue;
//             else
//             {
//                 mark=i-1;
//                 break;
//             }
//         }
//         if(mark==-1)
//         {
//             reverse(num.begin(),num.end());
//             return;
//         }
//         int mark2=0;
//         for(int i=n-1;i>mark;i--)
//         {
//             if(num[i]>num[mark])
//             {
//                 mark2=i;
//                 break;
//             }
//         }
//         swap(num[mark],num[mark2]);
//         reverse(num.begin()+mark+1,num.end());
//         return ;
//     }
// };

// 2019-07-20
// O(n)
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int index1 = -1;
        for(int i=n-1;i>0;i--)
        {
            if(nums[i-1] < nums[i])
            {
                index1 = i-1;
                break;
            }
        }
        
        if (index1 == -1)
        {
            reverse(nums.begin(), nums.end());
        }
        else
        {
            int index2 = n-1;
            for(int i=n-1;i>index1;i--)
            {
                if(nums[i] > nums[index1])
                {
                    index2 = i;
                    break;
                }
            }
            swap(nums[index1], nums[index2]);
            reverse(nums.begin() + index1 + 1, nums.end());
        }
    }
private:
    void swap(int &x, int &y)
    {
        int tmp = x;
        x = y;
        y = tmp;
    }
};
 