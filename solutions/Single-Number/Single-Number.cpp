
// class Solution {
// public:
//     int singleNumber(int A[], int n) {
//         int ans=0;
//         for(int i=0;i<n;i++)
//             ans=ans^A[i];
//         return ans;
//     }
// };

// 2019-07-27
// O(n)
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for(int num : nums)
        {
            ans ^= num;
        }
        return ans;
    }
}; 