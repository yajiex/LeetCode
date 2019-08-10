/*
https://leetcode.com/problems/split-array-largest-sum/discuss/89817/Clear-Explanation%3A-8ms-Binary-Search-Java
The answer is between maximum value of input array numbers and sum of those numbers.
Use binary search to approach the correct answer. We have l = max number of array; r = sum of all numbers in the array;Every time we do mid = (l + r) / 2;
Use greedy to narrow down left and right boundaries in binary search.
3.1 Cut the array from left.
3.2 Try our best to make sure that the sum of numbers between each two cuts (inclusive) is large enough but still less than mid.
3.3 We'll end up with two results: either we can divide the array into more than m subarrays or we cannot.
If we can, it means that the mid value we pick is too small because we've already tried our best to make sure each part holds as many non-negative numbers as we can but we still have numbers left. So, it is impossible to cut the array into m parts and make sure each parts is no larger than mid. We should increase m. This leads to l = mid + 1;
If we can't, it is either we successfully divide the array into m parts and the sum of each part is less than mid, or we used up all numbers before we reach m. Both of them mean that we should lower mid because we need to find the minimum one. This leads to r = mid - 1;
*/
// 2019-08-10
// O(log(sumOfArray - max)*n)
class Solution {
public:
    int splitArray(vector<int>& nums, int m) {
        long l = 0;
        long r = 0;
        for(auto& num: nums)
        {
            l = max(l, (long)num);
            r += num;
        }
        while(l<=r)
        {
            long mid = l + (r-l) / 2;
            if(ok(mid, nums, m))
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        return l;
    }
private:
    bool ok(long target, vector<int>& nums, int m) {
        long sum = 0;
        int cnt = 0;
        for(auto& num : nums)
        {
            sum += num;
            if (sum > target)
            {
                cnt++;
                if (cnt >= m)
                {
                    return false;
                }
                sum = num;
            }
        }
        return true;
    }
};