

class Solution:
    # @param strs, a list of strings
    # @return a list of strings
    def anagrams(self, strs):
        dict = {}
        for word in strs:
            temp = ''.join(sorted(word))
            dict[temp] = [word] if temp not in dict else dict[temp] + [word]
        ans = []
        for word in dict:
            if len(dict[word]) >= 2:
                ans += dict[word]
        return ans
 