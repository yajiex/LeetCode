

class Solution:
    # @return an integer
    def lengthOfLongestSubstring(self, s):
        ans = 0
        idx = -1
        location = [-1 for x in range(256)]
        for i in range(len(s)):
            if location[ord(s[i])]>idx:
                idx = location[ord(s[i])]
            if i-idx > ans:
                ans = i - idx
            location[ord(s[i])] = i
        return ans
 