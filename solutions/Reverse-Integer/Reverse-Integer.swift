class Solution {
    func reverse(_ x: Int) -> Int {
        var n = x
        var ans = 0
        while n != 0 {
            ans = ans * 10 + n % 10
            if ans >= Int32.max || ans <= Int32.min {
                return 0
            }
            n /= 10
        }
        return ans
    }
}