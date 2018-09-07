/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     public var val: Int
 *     public var next: ListNode?
 *     public init(_ val: Int) {
 *         self.val = val
 *         self.next = nil
 *     }
 * }
 */
class Solution {
    func addTwoNumbers(_ l1: ListNode?, _ l2: ListNode?) -> ListNode? {
        var p1 = l1
        var p2 = l2
        var carry = 0
        let pre: ListNode? = ListNode(0)
        var p = pre
        while p1 != nil || p2 != nil {
            let val1 = p1?.val ?? 0
            let val2 = p2?.val ?? 0
            let val = (val1 + val2 + carry) % 10
            carry = (val1 + val2 + carry) / 10
            p?.next = ListNode(val)
            p = p?.next
            p1 = p1?.next
            p2 = p2?.next
        }
        
        if carry > 0 {
            p?.next = ListNode(carry)
        }
        
        return pre?.next
    }
}