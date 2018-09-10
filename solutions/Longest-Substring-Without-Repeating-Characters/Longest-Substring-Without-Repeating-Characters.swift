class Solution {
    func lengthOfLongestSubstring(_ s: String) -> Int {
        var mp = [Character: Int]()
        var ans = 0
        var last = -1
        for (i, c) in s.characters.enumerated() {
            if let lastIndexOfC = mp[c] {
                last = max(last, lastIndexOfC)
            }
            ans = max(ans, i - last)
            mp[c] = i
        }
        
        return ans
    }
}