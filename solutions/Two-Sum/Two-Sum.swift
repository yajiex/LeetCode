class Solution {
    func twoSum(_ nums: [Int], _ target: Int) -> [Int] {
        var mp = [Int: Int]()
        for i in 0..<nums.count {
            if let index = mp[target - nums[i]] {
                return [index, i]
            } else {
                mp[nums[i]] = i
            }
        }
        return [0, 0]
    }
}