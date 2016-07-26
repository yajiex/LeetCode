/**
 * Definition for singly-linked list.
 * function ListNode(val) {
 *     this.val = val;
 *     this.next = null;
 * }
 */
/**
 * @param {ListNode} head
 * @return {ListNode}
 */
var deleteDuplicates = function (head) {
  if (head === null) {
    return head;
  }
  let slow = head;
  let fast = head.next;
  while (fast !== null) {
    if (fast.val !== slow.val) {
      slow.next = fast;
      slow = fast;
    }
    fast = fast.next;
  }
  slow.next = null;
  return head;
};