// /**
//  * @param {number[]} nums
//  * @param {number} target
//  * @return {number}
//  */
// var search = function (nums, target) {
//   const n = nums.length;
//   let lo = 0, hi = n - 1;
//   // find the index of the smallest value using binary search.
//   // Loop will terminate since mid < hi, and lo or hi will shrink by at least 1.
//   // Proof by contradiction that mid < hi: if mid==hi, then lo==hi and loop would have been terminated.
//   while (lo < hi) {
//     const mid = Math.floor((lo + hi) / 2);
//     if (nums[mid] > nums[hi]) {
//       lo = mid + 1;
//     } else {
//       hi = mid;
//     }
//   }
//   // lo==hi is the index of the smallest value and also the number of places rotated.
//   let rot = lo;
//   lo = 0;
//   hi = n - 1;
//   // The usual binary search and accounting for rotation.
//   while (lo <= hi) {
//     const mid = Math.floor((lo + hi) / 2);
//     const realmid = (mid + rot) % n;
//     if (nums[realmid] == target) {
//       return realmid;
//     }
//     if (nums[realmid] < target) {
//       lo = mid + 1;
//     } else {
//       hi = mid - 1;
//     }
//   }
//   return -1;
// };

// 2019-07-20
// O(logn)
class Solution {
  public:
      int search(vector<int>& nums, int target) {
          int n = nums.size();
          int l = 0;
          int r = n - 1;
          // Find the index of the smallest value
          while (l < r)
          {
              int m = l + (r - l) / 2;
              if (nums[m] > nums[r])
              {
                  l = m+1;
              }
              else
              {
                  r = m;
              }
          }
          int index = l;
          l = 0;
          r = n - 1;
          while(l <= r)
          {
              int m = l + (r - l) / 2;
              int realm = (m + index) % n;
              if (nums[realm] > target)
              {
                  r = m - 1;
              }
              else if (nums[realm] < target)
              {
                  l = m + 1;
              }
              else
              {
                  return realm;
              }
          }
          return -1;
      }
  };