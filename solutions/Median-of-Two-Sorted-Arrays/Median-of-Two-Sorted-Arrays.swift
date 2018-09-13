class Solution {
    func findMedianSortedArrays(_ nums1: [Int], _ nums2: [Int]) -> Double {
        let total = nums1.count + nums2.count
        if total % 2 == 1 {
            return findKth(nums1, nums1.count, nums2, nums2.count, total / 2 + 1)
        } else {
            return (findKth(nums1, nums1.count, nums2, nums2.count, total / 2) + findKth(nums1, nums1.count, nums2, nums2.count, total / 2 + 1)) / 2
        }
    }
    
    private func findKth(_ nums1: [Int], _ m: Int, _ nums2: [Int], _ n: Int, _ k: Int) -> Double {
        if m > n {
            return findKth(nums2, n, nums1, m, k)
        }
        
        if m == 0 {
            return Double(nums2[k - 1])
        }
        
        if k == 1 {
            return Double(min(nums1[0], nums2[0]))
        }
        
        let i = min(k / 2, m)
        let j = k - i
        if nums1[i - 1] < nums2[j - 1] {
            return findKth(Array(nums1[i..<m]), m - i, nums2, n, k - i)
        } else if nums1[i - 1] > nums2[j - 1] {
            return findKth(nums1, m, Array(nums2[j..<n]), n-j, k - j)
        } else {
            return Double(nums1[i - 1])
        }
    }
}