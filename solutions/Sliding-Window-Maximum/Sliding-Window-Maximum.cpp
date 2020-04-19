/*

The basic idea is to use a deque (buffer) to save all currently potential "maximum" elements (i.e. the element in the current k-element window [i-k+1, i], and it is larger than the elements after itself). So for each i, we first pop up the elements that are no larger than nums[i] from buffer until we find one that is larger than nums[i] or the buffer is empty since those elements will be covered by nums[i] and can not be a maximum of any k-element window. Then we put nums[i] in the buffer. If i>=k-1, we need to ouput the maximum for window [i-k+1, i], which is the front element of buffer. At last, we will check if the front element is nums[i-k+1], if so, we have to pop it up since it will be out of the window [i-k+2, i+1] in the next iteration. Since all the elements will be pushed into/ popped out of the buffer only once, so the time complexity is O(N).
*/
// class Solution {
// public:
//     vector<int> maxSlidingWindow(vector<int>& nums, int k) {
//         deque<int> buffer;
//         vector<int> res;

//         for(auto i=0; i<nums.size();++i)
//         {
//             while(!buffer.empty() && nums[i]>=nums[buffer.back()]) buffer.pop_back();
//             buffer.push_back(i);

//             if(i>=k-1) res.push_back(nums[buffer.front()]);
//             if(buffer.front()<= i-k + 1) buffer.pop_front();
//         }
//         return res;
//     }
// };

// 2020-04-19
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        deque<int> dq;
        for(int i=0;i<nums.size();i++) {
            if(!dq.empty() && dq.front() == i-k) {
                dq.pop_front();
            }
            while(!dq.empty() && nums[dq.back()] < nums[i]) {
                dq.pop_back();
            }
            dq.push_back(i);
            if(i >= k-1) {
                ans.push_back(nums[dq.front()]);
            }
        }
        return ans;
    }
};