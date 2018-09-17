class Solution {
    func longestPalindrome(_ s: String) -> String {
        guard s.count > 1 else {
            return s
        }
        var start = 0
        var end = 0
        let arr = Array(s)
        for (i, c) in arr.enumerated() {
            let ans1 = longestPalindromeHelper(arr, i, i)
            let ans2 = i < arr.count - 1 ? longestPalindromeHelper(arr, i, i + 1) : 0
            let len = max(ans1, ans2)
            if len >= end - start + 1 {
                start = len % 2 == 1 ? i - len / 2 : i - (len - 1) / 2
                end = i + len / 2
            }
        }
        return String(arr[start...end])
    }
    
    private func longestPalindromeHelper(_ s: [Character], _ midLeft: Int, _ midRight: Int) -> Int {
        var i = midLeft
        var j = midRight
        while i >= 0 && j < s.count && s[i] == s[j] {
            i -= 1
            j += 1
        }
        return j - i - 1
    }
}